#include <iostream>

// Итеративная функция для вычисления факториала
long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Рекурсивная функция для вычисления факториала
long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int unit6() {

     int n; //Пользовательский ввод число для рассчета
     char userChoice; //Пользовательский ввод выбор функции рассчета

     // Ввод числа
     std::cout << "Введите число для вычисления факториала: ";
     std::cin >> n;

     // Проверка на отрицательное число
     if (n < 0) {
         std::cout << "Отрицательно число запрещено!" << std::endl;
         return 1;
     }

     // Выбор метода вычисления факториала
     std::cout << "Выберите метод вычистения: 1 - итерация или 2 - рекурсия: ";
     std::cin >> userChoice;

     long long result;
     if (userChoice == '1') {
         result = factorialIterative(n);
         std::cout << "Факториал числа " << n << " равен " << result << std::endl;
     } else if (userChoice == '2') {
         result = factorialRecursive(n);
         std::cout << "Факториал числа " << n << " равен " << result << std::endl;
     } else {
         std::cout << "Неправильный ввод!" << std::endl;
     }
     return 0;
}
