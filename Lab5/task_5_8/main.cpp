#include <iostream>
#include <string>
#include <cctype> // для функции isdigit

// Функция для восстановления исходной строки из упакованной строки
std::string unpackString(const std::string& packed) {
    std::string unpacked;
    int n = packed.length();
    for (int i = 0; i < n; ++i) {
        // Если текущий символ - цифра
        if (isdigit(packed[i])) {
            int count = 0;
            // Считываем все цифры (в случае если число больше 9)
            while (i < n && isdigit(packed[i])) {
                count = count * 10 + (packed[i] - '0');
                ++i;
            }
            // Следующий символ - это буква
            if (i < n && isalpha(packed[i])) {
                unpacked.append(count, packed[i]);
            }
        } else if (isalpha(packed[i])) {
            // Если текущий символ - буква, просто добавляем ее
            unpacked.push_back(packed[i]);
        }
    }
    return unpacked;
}

int main() {
    std::string packed;
    std::cout << "Введите упакованную строку (прим. 4A4B2C3D): ";
    std::cin >> packed;

    std::string unpacked = unpackString(packed);

    std::cout << "Исходная строка: " << unpacked << std::endl;

    return 0;
}
