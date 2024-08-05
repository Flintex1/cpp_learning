#include <iostream>

int main() {
    // Инициализация переменных
    int m = 300;
    float fx = 300.6;
    char cht = 'z';

    // Печать значений переменных
    std::cout << "Указатель: продемонстрировать использование операторов & и *:" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "m = " << m << std::endl;
    std::cout << "fx = " << fx << std::endl;
    std::cout << "cht = " << cht << std::endl;
    std::cout << std::endl;

    // Вывод адресов переменных
    std::cout << "Использование & оператор:" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "адрес m = " << &m << std::endl;
    std::cout << "адрес fx = " << &fx << std::endl;
    std::cout << "адрес cht = " << static_cast<void*>(&cht) << std::endl;  // static_cast для корректного отображения адреса char
    std::cout << std::endl;

    // Использование указателей
    int *pM = &m;
    float *pFx = &fx;
    char *pCht = &cht;

    std::cout << "Используя операторы & и *:" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "значение по адресу m = " << *&m << std::endl;
    std::cout << "значение по адресу fx = " << *&fx << std::endl;
    std::cout << "значение по адресу cht = " << *&cht << std::endl;

    // Вывод адресов указателей
    std::cout << "Используя только переменную указателя:" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "адрес m = " << pM << std::endl;
    std::cout << "адрес fx = " << pFx << std::endl;
    std::cout << "адрес cht = " << static_cast<void*>(pCht) << std::endl;  // static_cast для корректного отображения адреса char
    std::cout << std::endl;

    // Вывод значений по указателям
    std::cout << "Использование только оператора указателя:" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "значение по адресу m = " << *pM << std::endl;
    std::cout << "значение по адресу fx = " << *pFx << std::endl;
    std::cout << "значение по адресу cht = " << *pCht << std::endl;

    return 0;
}
