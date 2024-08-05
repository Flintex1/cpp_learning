#include <iostream>
#include <functional> // ��� std::function

#define USE_STD_FUNCTION

// ��।������ �����᪨� �㭪権
bool andOperation(int a, int b) {
    return a && b;
}

bool orOperation(int a, int b) {
    return a || b;
}

bool xorOperation(int a, int b) {
    return a != b;
}

// �㭪�� ��� ���᫥��� १���� �����᪮� ����樨, ��।����� ��� callback
#ifdef USE_STD_FUNCTION
void calculateResult(int a, int b, std::function<bool(int, int)> operation) {
    std::cout << "������� �, ���, XOR: " << operation(a, b) << std::endl;
}
#else
void calculateResult(int a, int b, bool (*operation)(int, int)) {
    std::cout << "������� �, ���, XOR: " << operation(a, b) << std::endl;
}
#endif

int main() {
    int x; // True
    int y; // False

    std::cout << "������ ��� �᫠ 0 ��� 1:" << std::endl;
    std::cin >> x >> y;

    std::cout << "�����᪨� �㭪樨:" << std::endl;

    #ifdef USE_STD_FUNCTION
    std::cout << "�ᯮ�짮����� std::function:" << std::endl;
    calculateResult(x, y, andOperation); // ��।�� �㭪樨 �१ std::function
    calculateResult(x, y, orOperation);
    calculateResult(x, y, xorOperation);
    #else
    std::cout << "�ᯮ�짮����� 㪠��⥫�� �� �㭪樨:" << std::endl;
    calculateResult(x, y, andOperation); // ��।�� �㭪樨 �१ 㪠��⥫�
    calculateResult(x, y, orOperation);
    calculateResult(x, y, xorOperation);
    #endif

    return 0;
}
