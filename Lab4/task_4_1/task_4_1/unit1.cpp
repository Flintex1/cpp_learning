#include <iostream>


int unit1() {
    // ��६����
    int x;
    float y;
    double z;
    unsigned short k;

    // ����� ���祭�� � ���짮��⥫�
    std::cout << "������ ���祭�� ��� x (int): ";
    std::cin >> x;
    std::cout << "������ ���祭�� ��� y (float): ";
    std::cin >> y;
    std::cout << "������ ���祭�� ��� z (double): ";
    std::cin >> z;
    std::cout << "������ ���祭�� ��� k (unsigned short): ";
    std::cin >> k;

    // 1) int i = (x+y)*z+k;
    int i = int(((double)x + (float)y) * (double)z + k);
    std::cout << "������� (x+y)*z+k: " << i << std::endl;

    // 2) k = x-y/z;
    k = static_cast<unsigned short>(x - static_cast<float>(y / z));
    std::cout << "������� x-y/z: " << k << std::endl;

    // 3) z = x*y+z/x;
    z = static_cast<double>(x) * static_cast<double>(y) + z / static_cast<double>(x);
    std::cout << "������� x*y+z/x: " << z << std::endl;

    // 4) unsigned int ui = x/y+k;
    unsigned int ui = static_cast<unsigned int>(static_cast<float>(x) / y + k);
    std::cout << "������� x/y+k: " << ui << std::endl;

    // 5) short s = x/(x/y);
    short s = static_cast<short>(x / (x / static_cast<int>(y)));
    std::cout << "������� x%(x/y): " << s << std::endl;

    return 0;
}


