#include <iostream>
#include <limits>

// ���⨯� �㭪権 � trailing return type
auto copyInitialization() -> void;
auto directInitialization() -> void;
auto uniformInitialization() -> void;
auto autoInitialization() -> void;

int main() {
    copyInitialization();
    directInitialization();
    uniformInitialization();
    autoInitialization();
    return 0;
}

// �㭪�� ��� �������饩 ���樠����樨
auto copyInitialization() -> void {
    int iValue = 42;
    bool bValue = true;
    char cValue = 'A';
    long lValue = 1000000L;

    std::cout << "Copy Initialization:" << std::endl;
    std::cout << "int: " << iValue << " (Range: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (Range: " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (Range: " << +std::numeric_limits<char>::min() << " to " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (Range: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << ")" << std::endl;
    std::cout << std::endl;
}

// �㭪�� ��� ��אַ� ���樠����樨
auto directInitialization() -> void {
    int iValue(42);
    bool bValue(true);
    char cValue('A');
    long lValue(1000000L);

    std::cout << "Direct Initialization:" << std::endl;
    std::cout << "int: " << iValue << " (Range: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (Range: " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (Range: " << +std::numeric_limits<char>::min() << " to " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (Range: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << ")" << std::endl;
    std::cout << std::endl;
}

// �㭪�� ��� uniform ���樠����樨
auto uniformInitialization() -> void {
    int iValue{42};
    bool bValue{true};
    char cValue{'A'};
    long lValue{1000000L};

    std::cout << "Uniform Initialization:" << std::endl;
    std::cout << "int: " << iValue << " (Range: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (Range: " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (Range: " << +std::numeric_limits<char>::min() << " to " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (Range: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << ")" << std::endl;
    std::cout << std::endl;
}

// �㭪�� ��� ���樠����樨 � �ᯮ�짮������ auto
auto autoInitialization() -> void {
    auto iValue = 42;
    auto bValue = true;
    auto cValue = 'A';
    auto lValue = 1000000L;

    std::cout << "Auto Initialization:" << std::endl;
    std::cout << "int: " << iValue << " (Range: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << ")" << std::endl;
    std::cout << "bool: " << bValue << " (Range: " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << ")" << std::endl;
    std::cout << "char: " << cValue << " (Range: " << +std::numeric_limits<char>::min() << " to " << +std::numeric_limits<char>::max() << ")" << std::endl;
    std::cout << "long: " << lValue << " (Range: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << ")" << std::endl;
    std::cout << std::endl;
}
