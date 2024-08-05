#include <iostream>

void unit5() {
    // Заголовок таблицы
    std::cout << "Символ\tASCII" << std::endl;
    std::cout << "------------------------" << std::endl;

    // Цикл for для символов от 'a' до 'z'
    for (char c = 'a'; c <= 'z'; ++c) {
        std::cout << c << "\t" << static_cast<int>(c) << std::endl;
    }
}
