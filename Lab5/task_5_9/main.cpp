#include <iostream>
#include <string>

// Функция для обработки строки
std::string processString(const std::string& input) {
    std::string result;
    bool inSpace = false; // Флаг для отслеживания пробелов

    for (char ch : input) {
        if (ch == '\t') {
            ch = ' '; // Замена табуляции на пробел
        }

        if (ch == ' ') {
            if (!inSpace) { // Если это первый пробел
                result.push_back(ch);
                inSpace = true; // Установить флаг
            }
        } else {
            result.push_back(ch);
            inSpace = false; // Сбросить флаг, так как это не пробел
        }
    }

    // Удаление начальных и конечных пробелов
    if (!result.empty() && result.front() == ' ') {
        result.erase(result.begin());
    }
    if (!result.empty() && result.back() == ' ') {
        result.erase(result.end() - 1);
    }

    return result;
}

int main() {
    std::string input;

    std::cout << "Введите строку (максимально 100 символов): ";
    std::getline(std::cin, input);

    if (input.length() > 100) {
        std::cout << "Ошибка: строка слишком длинная." << std::endl;
        return 1;
    }

    std::string processed = processString(input);

    std::cout << "Обработанная строка: \"" << processed << "\"" << std::endl;

    return 0;
}
