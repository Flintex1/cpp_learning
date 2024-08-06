#include <iostream>


int unit1() {
    // Переменные
    int x;
    float y;
    double z;
    unsigned short k;

    // Запрос значений у пользователя
    std::cout << "Введите значение для x (int): ";
    std::cin >> x;
    std::cout << "Введите значение для y (float): ";
    std::cin >> y;
    std::cout << "Введите значение для z (double): ";
    std::cin >> z;
    std::cout << "Введите значение для k (unsigned short): ";
    std::cin >> k;

    // 1) int i = (x+y)*z+k;
    int i = int(((double)x + (float)y) * (double)z + k);
    std::cout << "Результат (x+y)*z+k: " << i << std::endl;

    // 2) k = x-y/z;
    k = static_cast<unsigned short>(x - static_cast<float>(y / z));
    std::cout << "Результат x-y/z: " << k << std::endl;

    // 3) z = x*y+z/x;
    z = static_cast<double>(x) * static_cast<double>(y) + z / static_cast<double>(x);
    std::cout << "Результат x*y+z/x: " << z << std::endl;

    // 4) unsigned int ui = x/y+k;
    unsigned int ui = static_cast<unsigned int>(static_cast<float>(x) / y + k);
    std::cout << "Результат x/y+k: " << ui << std::endl;

    // 5) short s = x/(x/y);
    short s = static_cast<short>(x / (x / static_cast<int>(y)));
    std::cout << "Результат x%(x/y): " << s << std::endl;

    return 0;
}


