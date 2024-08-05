#include <iostream>
#include <vector>
#include <algorithm>

// Функция для сортировки строк по длине
bool compareByLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

// Функция для ввода строк пользователем
void inputStrings(std::vector<std::string>& strings) {
    std::string input;
    std::cout << "Введите строки (максимально 25 строк, каждая строка не более 80 символов). Введите пустую строку для завершения ввода:" << std::endl;
    while (strings.size() < 25) {
        std::getline(std::cin, input);
        if (input.empty()) {
            break;
        }
        if (input.length() > 80) {
            std::cout << "Ошибка: строка слишком длинная. Пожалуйста, введите строку не более 80 символов." << std::endl;
            continue;
        }
        strings.push_back(input);
    }
}

// Функция для выбора типа сортировки
char getSortChoice() {
    char choice;
    std::cout << "Выберите способ сортировки (1 - по длине, 2 - по алфавиту): ";
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем остаток ввода
    return choice;
}

// Основная функция
int main() {
    std::vector<std::string> strings;

    // Ввод строк
    inputStrings(strings);

    // Выбор типа сортировки
    char choice = getSortChoice();

    // Сортировка строк в зависимости от выбора пользователя
    if (choice == '1') {
        std::sort(strings.begin(), strings.end(), compareByLength);
    } else if (choice == '2') {
        std::sort(strings.begin(), strings.end());
    } else {
        std::cout << "Некорректный выбор. Завершение программы." << std::endl;
        return 1;
    }

    // Вывод отсортированных строк
    std::cout << "Отсортированные строки:" << std::endl;
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
