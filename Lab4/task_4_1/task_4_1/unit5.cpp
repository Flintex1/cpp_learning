#include <iostream>

void unit5() {
    // ��������� ⠡����
    std::cout << "������\tASCII" << std::endl;
    std::cout << "------------------------" << std::endl;

    // ���� for ��� ᨬ����� �� 'a' �� 'z'
    for (char c = 'a'; c <= 'z'; ++c) {
        std::cout << c << "\t" << static_cast<int>(c) << std::endl;
    }
}
