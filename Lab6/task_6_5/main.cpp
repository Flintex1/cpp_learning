#include <iostream>
#include <list>

// Функция для добавления среднего арифметического в конец списка
void addAverageToList(std::list<double>& newList) {

    // Вычисляем сумму всех элементов списка
    //i - элемент списка
    double sum;
    for (double i : newList) {
        sum += i;
    }

    // Вычисляем среднее арифметическое
    double average = sum / newList.size();

    // Добавляем среднее арифметическое в конец списка
    newList.push_back(average);
}

int main() {
    // Заполняем начальный список
    std::list<double> numbers = {1.1, 2.2, 3.3, 4.4};

    std::cout << "Список до добавления среднего: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Добавляем среднее арифметическое в конец списка
    addAverageToList(numbers);

    std::cout << "Список после добавления среднего: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
