#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

void unit3() {

    const int size = 5; //������ ������
    int matrix[size][size] = {0}; //���������� ������ ��ﬨ

    // ���������� �����筮� ������
    for (int i = 0; i < size; ++i) {
        matrix[i][i] = 1;
    }

    // �뢮� ������ � ���᮫�
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}
