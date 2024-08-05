#include <iostream>
#include <cctype>

// Определение этажей с помощью перечисления (enum)
enum Floor {
    PARKING = 0,
    GROCERY,
    CLOTHING,
    BOOTIQUE,
    FOODCORT,
    GYM,
    CINEMA,
    OFFICE
};

// Функция для вывода информации о каждом этаже
void printFloor(Floor floor) {
    switch (floor) {
        case PARKING:
            std::cout << "Вы прибыли на этаж <<Парковка>>." << std::endl;
            break;
        case GROCERY:
            std::cout << "Вы прибыли на этаж <<Продуктовый магазин>>." << std::endl;
            break;
        case CLOTHING:
            std::cout << "Вы прибыли на этаж <<Магазины одежды>>." << std::endl;
            break;
        case BOOTIQUE:
            std::cout << "Вы прибыли на этаж <<Брендовые бутики>>." << std::endl;
            break;
        case FOODCORT:
            std::cout << "Вы прибыли на этаж <<Фудкорт>>." << std::endl;
            break;
        case GYM:
            std::cout << "Вы прибыли на этаж <<Спортзал>>." << std::endl;
            break;
        case CINEMA:
            std::cout << "Вы прибыли на этаж <<Кинотеатр>>." << std::endl;
            break;
        case OFFICE:
            std::cout << "Вы прибыли на этаж <<Офисы>>." << std::endl;
            break;
        default:
            std::cout << "Видимо вы промахнулись... У нас нет таких этажей." << std::endl;
            break;
    }
}

int main() {


    int userChoice;

    // Вывод информации о доступных этажах
    std::cout << "Добропожаловать в наш ТЦ!" << std::endl;
    std::cout << "Пожалуйста, выберите этаж (0-7):" << std::endl;
    std::cout << "0 - Парковка" << std::endl;
    std::cout << "1 - Продуктовый магазин" << std::endl;
    std::cout << "2 - Магазины одежды" << std::endl;
    std::cout << "3 - Брендовые бутики" << std::endl;
    std::cout << "4 - Фудкорт" << std::endl;
    std::cout << "5 - Спортзал" << std::endl;
    std::cout << "6 - Кинотеатр" << std::endl;
    std::cout << "7 - Офисы" << std::endl;

    // Получение ввода от пользователя
    std::cout << "Нажмите кнопку нужного этажа: ";
    std::cin >> userChoice;

    // Проверка корректности ввода (число)
    if (std::cin.fail()) {
        std::cout << "Вы вызвали лифтера т.к. нажали на кнопку <<Вызов персонала>>." << std::endl;
        return 0;
    }

    printFloor(static_cast<Floor>(userChoice));

    return 0;
}
