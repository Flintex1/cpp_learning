#include <iostream>
#include <random>

void unit2() { //2. �������� ���ᨢ.

    // ���樠������ ������� �ᥢ����砩��� �ᥫ � ������� ����� ���ᥭ�
    std::random_device rd;
    std::mt19937 mersenne(rd());

    const int array_size = 10;
    int array[array_size];

    // ���������� ���ᨢ� ��砩�묨 �᫠��
    int i{};
    while (i < array_size) {
        array[i] = mersenne();
        i++;
    }

    // �뢮� ����⮢ ���ᨢ�
    std::cout << "�������� ���ᨢ�: ";
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
        if ((i + 1) % 10 == 0)
        std::cout << "\n";
    }

    // ���� ���ᨬ��쭮�� ���祭��
    int max = array[0];
    for(int i = 0; i < 5; ++i)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    // ���� �������쭮�� ���祭��
    int min = array[0];
    for(int i = 0; i < 5; ++i)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    // �뢮� ��������� ���祭��
    std::cout << "���ᨬ��쭮� ���祭�� ���ᨢ�: " << max << std::endl;
    std::cout << "�������쭮� ���祭�� ���ᨢ�: " << min << std::endl;

}
