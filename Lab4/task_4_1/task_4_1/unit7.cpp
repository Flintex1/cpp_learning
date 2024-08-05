#include <iostream>

// Функция для вычисления числа Фибоначчи
long long fibonacciIterative(int n) {

    // Первые чисоа Фибонначи по-умолчанию
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long prev = 0;  // Предыдущее число Фибоначчи
    long long current = 1; // Текущее число Фибоначчи
    long long sum; //Сумма сложения

    for (int i = 2; i <= n; ++i) {
        sum = prev + current;
        prev = current;
        current = sum;
    }

    return sum;
}


int unit7() {

    int fibonacciNumber;

    std::cout << "Введите число Фибонначи:" << std::endl;
    std::cin >> fibonacciNumber;

    for (int count = 0; count < fibonacciNumber; ++count) {
        //Считаем и выводим числа
        std::cout << fibonacciIterative(count) << " ";
    }
    std::cout << std::endl; // Переход на новую строку после вывода всех чисел
    return 0;
}
