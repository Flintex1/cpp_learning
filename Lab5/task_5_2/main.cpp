#include <iostream>
#include <string>

// ��।������ ����᫥��� Animal
enum class Animal {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG
};

// �㭪�� ��� ����祭�� ����� ����⭮��
std::string getAnimalName(Animal animal) {
    switch (animal) {
        case Animal::PIG:
            return "������";
        case Animal::CHICKEN:
            return "����";
        case Animal::GOAT:
            return "����";
        case Animal::CAT:
            return "��誠";
        case Animal::DOG:
            return "������";
        default:
            return "�������⭮� ����⭮�";
    }
}

// �㭪�� ��� ���� ������⢠ ���
void printNumberOfLegs(Animal animal) {
    switch (animal) {
        case Animal::PIG:
            std::cout << "� ᢨ�� 4 ����." << std::endl;
            break;
        case Animal::CHICKEN:
            std::cout << "� ����� 2 ����." << std::endl;
            break;
        case Animal::GOAT:
            std::cout << "� ����� 4 �����." << std::endl;
            break;
        case Animal::CAT:
            std::cout << "� ��誨 4 ����." << std::endl;
            break;
        case Animal::DOG:
            std::cout << "� ᮡ��� 4 ����." << std::endl;
            break;
        default:
            std::cout << "�������⭮� ����⭮�" << std::endl;
            break;
    }
}

int main() {

    Animal myAnimal = Animal::CAT;

    std::cout << "��࠭��� ����⭮�: " << getAnimalName(myAnimal) << std::endl;
    printNumberOfLegs(myAnimal);

    return 0;
}
