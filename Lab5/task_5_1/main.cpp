#include <iostream>
#include <cctype>

// ��।������ �⠦�� � ������� ����᫥��� (enum)
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

// �㭪�� ��� �뢮�� ���ଠ樨 � ������ �⠦�
void printFloor(Floor floor) {
    switch (floor) {
        case PARKING:
            std::cout << "�� �ਡ뫨 �� �⠦ <<��મ���>>." << std::endl;
            break;
        case GROCERY:
            std::cout << "�� �ਡ뫨 �� �⠦ <<�த�⮢� �������>>." << std::endl;
            break;
        case CLOTHING:
            std::cout << "�� �ਡ뫨 �� �⠦ <<�������� ������>>." << std::endl;
            break;
        case BOOTIQUE:
            std::cout << "�� �ਡ뫨 �� �⠦ <<�७���� ��⨪�>>." << std::endl;
            break;
        case FOODCORT:
            std::cout << "�� �ਡ뫨 �� �⠦ <<�㤪���>>." << std::endl;
            break;
        case GYM:
            std::cout << "�� �ਡ뫨 �� �⠦ <<����⧠�>>." << std::endl;
            break;
        case CINEMA:
            std::cout << "�� �ਡ뫨 �� �⠦ <<����⥠��>>." << std::endl;
            break;
        case OFFICE:
            std::cout << "�� �ਡ뫨 �� �⠦ <<����>>." << std::endl;
            break;
        default:
            std::cout << "������ �� �஬��㫨��... � ��� ��� ⠪�� �⠦��." << std::endl;
            break;
    }
}

int main() {


    int userChoice;

    // �뢮� ���ଠ樨 � ����㯭�� �⠦��
    std::cout << "���ய��������� � ��� ��!" << std::endl;
    std::cout << "��������, �롥�� �⠦ (0-7):" << std::endl;
    std::cout << "0 - ��મ���" << std::endl;
    std::cout << "1 - �த�⮢� �������" << std::endl;
    std::cout << "2 - �������� ������" << std::endl;
    std::cout << "3 - �७���� ��⨪�" << std::endl;
    std::cout << "4 - �㤪���" << std::endl;
    std::cout << "5 - ����⧠�" << std::endl;
    std::cout << "6 - ����⥠��" << std::endl;
    std::cout << "7 - ����" << std::endl;

    // ����祭�� ����� �� ���짮��⥫�
    std::cout << "������ ������ �㦭��� �⠦�: ";
    std::cin >> userChoice;

    // �஢�ઠ ���४⭮�� ����� (�᫮)
    if (std::cin.fail()) {
        std::cout << "�� �맢��� ����� �.�. ������ �� ������ <<�맮� ���ᮭ���>>." << std::endl;
        return 0;
    }

    printFloor(static_cast<Floor>(userChoice));

    return 0;
}
