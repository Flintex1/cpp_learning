#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>

// Функция для вывода содержимого контейнера
template <typename Container>
void printContainer(const Container& container) {
    // Вывод в прямом порядке
    std::cout << "Прямой порядок: ";
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Вывод в обратном порядке с использованием обратного итератора
    std::cout << "Обратный порядок: ";
    for (auto it = container.rbegin(); it != container.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


int main() {
    int N;

    // Запрос значения N у пользователя
    std::cout << "Введите количество элементов (от 1 до 1000): ";
    std::cin >> N;

    // Проверка, что N находится в допустимых пределах
    if (N < 1 || N > 1000) {
        std::cerr << "Ошибка: N должно быть в диапазоне от 1 до 1000." << std::endl;
        return 1;
    }

    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Создание контейнера и генерация случайных чисел
    std::vector<int> numbers;
    for (int i = 0; i < N; ++i) {
        // Генерация числа в пределах от -2*10^3 до 2*10^3
        int random_number = std::rand() % 200 - 200;
        numbers.push_back(random_number);
    }

    // Вывод содержимого контейнера, по 10 элементов в строке
    for (int i = 0; i < N; ++i) {
        std::cout << numbers[i] << " ";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }

    // Подсчет количества уникальных чисел
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    std::cout << "\nКоличество уникальных чисел: " << unique_numbers.size() << std::endl;

    //Вывод контейнера в прямом и обратном порядке через функцию
    printContainer(numbers);

    return 0;
}
