#include <iostream>

//1 �㭪�� ��� ���᫥��� �㡠 �᫠
double cube(double value) {
    return value * value * value;
}

//2 �㭪�� ��� �뢮�� ᨬ���� � ᨬ���쭮� � �����筮� ����
void printCharInfo(char character) {
    std::cout << "�������� ᨬ���: " << character << std::endl;
    std::cout << "��� �����筮� ���祭��: " << static_cast<int>(character) << std::endl;
}

//3 �㭪�� ���樠����樨 � �뢮�� ���������� ���祭��

// ���⨯� �㭪権 � trailing return type
auto copyInitialization(int iValue,bool bValue,char cValue,long lValue) -> void;
auto directInitialization() -> void;
auto uniformInitialization() -> void;
auto autoInitialization() -> void;


// �㭪�� ��� �������饩 ���樠����樨
auto copyInitialization() -> void {
    int iValue = 42;
    bool bValue = true;
    char cValue = 'A';
    long lValue = 1000000L;

    std::cout << "��������� ���樠������:" << std::endl;
    std::cout << "int: " << iValue << " (������ �: " << std::numeric_limits<int>::min() << " �� " << std::numeric_limits<int>::max() << ")" << std::endl;
   std::cout << "bool: " << bValue << " (������ �: " << std::numeric_limits<bool>::min() << " �� " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (������ �: " << +std::numeric_limits<char>::min() << " �� " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (������ �: " << std::numeric_limits<long>::min() << " �� " << std::numeric_limits<long>::max() << ")" << std::endl;

}

// �㭪�� ��� ��אַ� ���樠����樨
auto directInitialization() -> void {
    int iValue(42);
    bool bValue(true);
    char cValue('A');
    long lValue(1000000L);

    std::cout << "��ﬠ� ���樠������:" << std::endl;
    std::cout << "int: " << iValue << " (������ �: " << std::numeric_limits<int>::min() << " �� " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (������ �: " << std::numeric_limits<bool>::min() << " �� " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (������ �: " << +std::numeric_limits<char>::min() << " �� " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (������ �: " << std::numeric_limits<long>::min() << " �� " << std::numeric_limits<long>::max() << ")" << std::endl;

}

// �㭪�� ��� uniform ���樠����樨
auto uniformInitialization() -> void {
    int iValue{42};
    bool bValue{true};
    char cValue{'A'};
    long lValue{1000000L};

    std::cout << "uniform ���樠������:" << std::endl;
    std::cout << "int: " << iValue << " (������ �: " << std::numeric_limits<int>::min() << " �� " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (������ �: " << std::numeric_limits<bool>::min() << " �� " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (������ �: " << +std::numeric_limits<char>::min() << " �� " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (������ �: " << std::numeric_limits<long>::min() << " �� " << std::numeric_limits<long>::max() << ")" << std::endl;

}

// �㭪�� ��� ���樠����樨 � �ᯮ�짮������ auto
auto autoInitialization() -> void {
    auto iValue = 42;
    auto bValue = true;
    auto cValue = 'A';
    auto lValue = 1000000L;

    std::cout << "��� ���樠������:" << std::endl;
    std::cout << "int: " << iValue << " (������ �: " << std::numeric_limits<int>::min() << " �� " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (������ �: " << std::numeric_limits<bool>::min() << " �� " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (������ �: " << +std::numeric_limits<char>::min() << " �� " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (������ �: " << std::numeric_limits<long>::min() << " �� " << std::numeric_limits<long>::max() << ")" << std::endl;

}

// 4. ������쭠� � �����쭠� ��६���� � ��������� ������
int dupVariable = 100;

void showLocalAndGlobalVariables() {
    int dupVariable = 200;
    std::cout << "�����쭠� ��६�����: " << dupVariable << std::endl;
    std::cout << "�������쭠� ��६�����: " << ::dupVariable << std::endl;
}

// 5. �뢮� �㭪樨 � ��ࠬ��ࠬ� �� 㬮�砭��
void printChar(int c='a', char b='b', char c2='c', char d='d') {
    std::cout << "���祭��: " << static_cast<char>(c) << ", " << b << ", " << c2 << ", " << d << std::endl;
}

// 6. ��ॣ�㧪� �㭪権
int substract(int a) {
    std::cout << "��᫮: " << a << " ���: int, ������: " << sizeof(a) << " ����" << std::endl;
}

float substract(float a) {
    std::cout << "��᫮: " << a << " ���: float, ������: " << sizeof(a) << " ����" << std::endl;
}
// 7. �㭪樨 ���᪠ ���ᨬ㬠, �����㬠 � ᤢ���
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int shiftLeft(int value, int bits) {
    std::cout << "�� ᤢ���: " << value << std::endl;
    int result = value << bits;
    std::cout << "��᫥ ᤢ���: " << result << std::endl;
    return result;
}

int shiftRight(int value, int bits) {
    std::cout << "�� ᤢ���: " << value << std::endl;
    int result = value >> bits;
    std::cout << "��᫥ ᤢ���: " << result << std::endl;
    return result;
}

int main() {


    // 1. ���� � ���᫥��� �㡠 �᫠
    std::cout << "*** ��� ***" << std::endl;
    double num;
    std::cout << "������ �᫮: ";
    std::cin >> num;
    std::cout << "�� �᫠ " << num << " ࠢ�� " << cube(num) << std::endl;


    // 2. ���� ᨬ���� � �뢮� ��� ���ଠ樨
    std::cout << "*** ������ ***" << std::endl;
    char ch;
    std::cout << "������ ᨬ���: ";
    std::cin >> ch;
    printCharInfo(ch);

    // 3. ���樠������ ��६����� � �뢮� �� ����������
    std::cout << "*** ������������� ���������� ***" << std::endl;
   // ��������!!!!

    // 4. ���������� �����쭮� � ������쭮� ��६�����
    std::cout << "*** ��������� � ���������� ���������� ***" << std::endl;
    showLocalAndGlobalVariables();

    // 5. �맮� �㭪樨 � ��ࠬ��ࠬ�, ������묨 �� 㬮�砭��
    std::cout << "*** ����� ������� � ����������� �� ��������� ***" << std::endl;
    printChar();
    printChar('x');
    printChar('x', 'y');
    printChar('x', 'y', 'z');
    printChar('x', 'y', 'z', 'w');

    // 6. ��ॣ�㧪� �㭪権
    std::cout << "*** ���������� ������� ***" << std::endl;
    float floatVar(3.14);
    substract(floatVar);

    int intVar(666);
    substract(intVar);

    // 7. ���� ���ᨬ㬠, �����㬠 � ᤢ��
    std::cout << "*** ������� � �������� ***" << std::endl;
    //int a = 1, b = 200;
    std::cout << "������ ��� ࠧ��� �᫠ �१ �஡��: ";
    int a,b;
    std::cin >> a >> b;
    std::cout << "����襥 �᫮: " << findMax(a, b) << std::endl;
    std::cout << "����襥 �᫮: " << findMin(a, b) << std::endl;

    std::cout << "*** ����� �����***" << std::endl;
    shiftLeft(2, 2);
    std::cout << "*** ����� ������***" << std::endl;
    shiftRight(2, 2);

    return 0;
}
