#include <iostream>

int main() {

    // Вводная строка
    std::cout << "Задание 5" << std::endl;

    //Объявляем массив с указателем
    int* ptr = new int[5];

    for (auto i=0; i < 5; ++i) {
        *(ptr+i)=i;
    }

    for (auto i=0; i < 5; ++i) {
        std::cout << *(ptr+i) << std::endl;
    }

    return 0;
}
