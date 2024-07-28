#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>



const int martixSize = 8;

//Функция создания матрицы
void fillMatrix(int matrix[martixSize][martixSize]) {
    for (int i = 0; i < martixSize; ++i) {
        for (int j = 0; j < martixSize; ++j) {
            matrix[i][j] = rand() % 31 - 15; // Генерация чисел от -15 до 15
        }
    }
}
//Функция выводит матрицу в консоль
void printMatrix(const int matrix[martixSize][martixSize]) {
    for (int i = 0; i < martixSize; ++i) {
        for (int j = 0; j < martixSize; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
//Функция считает значения выше диагонали
int sumAboveDiagonal(const int matrix[martixSize][martixSize]) {
    int sum = 0;
    for (int i = 0; i < martixSize; ++i) {
        for (int j = i + 1; j < martixSize; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}



void unit4() {

    std::srand(std::time(nullptr)); // Инициализация генератора случайных чисел
    int matrix[martixSize][martixSize];

    fillMatrix(matrix); // Заполняем матрицу

    printMatrix(matrix); // Вывод матрицы в консоль

    int sum = sumAboveDiagonal(matrix); // Результат сложения значений выше диагонали

    std::cout << "Сумма элементов выше главной диагонали: " << sum << std::endl;

}

