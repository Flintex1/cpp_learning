#include <iostream>
#include <functional> // Для std::function

#define USE_STD_FUNCTION

// Определение логических функций
bool andOperation(int a, int b) {
    return a && b;
}

bool orOperation(int a, int b) {
    return a || b;
}

bool xorOperation(int a, int b) {
    return a != b;
}

// Функция для вычисления результата логической операции, переданной как callback
#ifdef USE_STD_FUNCTION
void calculateResult(int a, int b, std::function<bool(int, int)> operation) {
    std::cout << "Результат И, ИЛИ, XOR: " << operation(a, b) << std::endl;
}
#else
void calculateResult(int a, int b, bool (*operation)(int, int)) {
    std::cout << "Результат И, ИЛИ, XOR: " << operation(a, b) << std::endl;
}
#endif

int main() {
    int x; // True
    int y; // False

    std::cout << "Введите два числа 0 или 1:" << std::endl;
    std::cin >> x >> y;

    std::cout << "Логические функции:" << std::endl;

    #ifdef USE_STD_FUNCTION
    std::cout << "Использование std::function:" << std::endl;
    calculateResult(x, y, andOperation); // Передача функции через std::function
    calculateResult(x, y, orOperation);
    calculateResult(x, y, xorOperation);
    #else
    std::cout << "Использование указателей на функции:" << std::endl;
    calculateResult(x, y, andOperation); // Передача функции через указатель
    calculateResult(x, y, orOperation);
    calculateResult(x, y, xorOperation);
    #endif

    return 0;
}
