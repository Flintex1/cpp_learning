#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>



const int martixSize = 8;

//�㭪�� ᮧ����� ������
void fillMatrix(int matrix[martixSize][martixSize]) {
    for (int i = 0; i < martixSize; ++i) {
        for (int j = 0; j < martixSize; ++j) {
            matrix[i][j] = rand() % 31 - 15; // ������� �ᥫ �� -15 �� 15
        }
    }
}
//�㭪�� �뢮��� ������ � ���᮫�
void printMatrix(const int matrix[martixSize][martixSize]) {
    for (int i = 0; i < martixSize; ++i) {
        for (int j = 0; j < martixSize; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
//�㭪�� ��⠥� ���祭�� ��� ���������
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

    std::srand(std::time(nullptr)); // ���樠������ ������� ��砩��� �ᥫ
    int matrix[martixSize][martixSize];

    fillMatrix(matrix); // ������塞 ������

    printMatrix(matrix); // �뢮� ������ � ���᮫�

    int sum = sumAboveDiagonal(matrix); // ������� ᫮����� ���祭�� ��� ���������

    std::cout << "�㬬� ����⮢ ��� ������� ���������: " << sum << std::endl;

}

