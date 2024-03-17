#include <iostream>
#include <string>
int main()
{
    //TODO 1st task
    std::cout << "TODO" << std::endl;
    // TODO Do smth

    std::string inputName; //Объявляем текстовую переменную Имя
    std::cout << "Введите ваше имя" << std::endl;
    std::cin >> inputName; //Инициализируем текстовую переменную из ввода

    int inputAge; //Объявляем цифровую переменную Возраст
    std::cout << "Введите ваш возраст" << std::endl;
    std::cin >> inputAge; //Инициализируем цифровую переменную из ввода

    std::cout << "Вас зовут: " << inputName << ". Ваш возрас: " << inputAge << std::endl; //Выводим переменные
    std::cout << "inputName is " << sizeof(inputName) << std::endl;

    return 0;
}
