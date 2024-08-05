#include <iostream>
#include <cctype> // Для функций islower, isupper, tolower, toupper

// Функция для обмена значений четных и нечетных ячеек массива
void swapEvenOdd(char* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        std::swap(arr[i], arr[i + 1]);
    }
}

// Функция для изменения регистра букв в массиве
void toggleCase(char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (std::islower(arr[i])) {
            arr[i] = std::toupper(arr[i]);
        } else if (std::isupper(arr[i])) {
            arr[i] = std::tolower(arr[i]);
        }
    }
}

int main() {
    // Инициализация массива из 12 элементов
    char arr[12] = {'a', 'B', 'c', 'D', 'e', 'F', 'g', 'H', 'i', 'J', 'k', 'L'};

    // Вывод массива до изменения
    std::cout << "Массив до изменения:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Вызов функции для обмена значений четных и нечетных ячеек
    swapEvenOdd(arr, 12);

    // Вывод массива после обмена значений
    std::cout << "Массив после обмена значений четных и нечетных ячеек:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Вызов функции для изменения регистра букв
    toggleCase(arr, 12);

    // Вывод массива после изменения регистра
    std::cout << "Массив после изменения регистра:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
