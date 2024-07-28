#include <iostream>
#include <random>

void unit2() { //2. Одномерный массив.

    // Инициализация генератора псевдослучайных чисел с помощью Вихря Мэрсена
    std::random_device rd;
    std::mt19937 mersenne(rd());

    const int array_size = 10;
    int array[array_size];

    // Заполнение массива случайными числами
    int i{};
    while (i < array_size) {
        array[i] = mersenne();
        i++;
    }

    // Вывод элементов массива
    std::cout << "Элементы массива: ";
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
        std::cout << "\n";
    }

    // Поиск максимального значения
    int max = array[0];
    for(int i = 0; i < 5; ++i)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    // Поиск минимального значения
    int min = array[0];
    for(int i = 0; i < 5; ++i)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    // Вывод найденных значений
    std::cout << "Максимальное значение массива: " << max << std::endl;
    std::cout << "Минимальное значение массива: " << min << std::endl;

}
