#include <iostream>

// Функция для генерации и вывода всех перестановок
void useSwap(char arr[], int first, int last) {

    if (first == last) {
        // Выводим перестановку
        for (int i = 0; i <= last; ++i) {
            std::cout << arr[i];
        }
        std::cout << std::endl;
    } else {
        for (int i = first; i <= last; ++i) {
            // Обмен элементов
            std::swap(arr[first], arr[i]);
            // Рекурсивный вызов
            useSwap(arr, first + 1, last);
            // Обмен элементов обратно
            std::swap(arr[first], arr[i]);
        }
    }
}

int main() {

    // Инициализация массива символов
    char phases[] = {'U', 'V', 'W', 'N'};

    // Получаем количество элементов массива
    int phasesSize = sizeof(phases) / sizeof(phases[0]);

    std::cout << "Все варианты перестановок:" << std::endl;
    useSwap(phases, 0, phasesSize - 1); //Запускаем функцию с индексом первого элемента и последнего

    return 0;
}
