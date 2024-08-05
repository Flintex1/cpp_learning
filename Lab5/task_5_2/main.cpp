#include <iostream>
#include <string>

// Определение перечисления Animal
enum class Animal {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG
};

// Функция для получения имени животного
std::string getAnimalName(Animal animal) {
    switch (animal) {
        case Animal::PIG:
            return "Свинья";
        case Animal::CHICKEN:
            return "Курица";
        case Animal::GOAT:
            return "Козёл";
        case Animal::CAT:
            return "Кошка";
        case Animal::DOG:
            return "Собака";
        default:
            return "Неизвестное животное";
    }
}

// Функция для печати количества лап
void printNumberOfLegs(Animal animal) {
    switch (animal) {
        case Animal::PIG:
            std::cout << "У свиньи 4 лапы." << std::endl;
            break;
        case Animal::CHICKEN:
            std::cout << "У курицы 2 ноги." << std::endl;
            break;
        case Animal::GOAT:
            std::cout << "У козла 4 копыта." << std::endl;
            break;
        case Animal::CAT:
            std::cout << "У кошки 4 лапы." << std::endl;
            break;
        case Animal::DOG:
            std::cout << "У собаки 4 лапы." << std::endl;
            break;
        default:
            std::cout << "Неизвестное животное" << std::endl;
            break;
    }
}

int main() {

    Animal myAnimal = Animal::CAT;

    std::cout << "Выбранное животное: " << getAnimalName(myAnimal) << std::endl;
    printNumberOfLegs(myAnimal);

    return 0;
}
