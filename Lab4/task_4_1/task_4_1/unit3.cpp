#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

void unit3() {

    const int size = 5; //Размер матрицы
    int matrix[size][size] = {0}; //Заполнение матрицы нулями

    // Заполнение единичной матрицы
    for (int i = 0; i < size; ++i) {
        matrix[i][i] = 1;
    }

    // Вывод матрицы в консоль
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}
