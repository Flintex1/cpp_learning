#include <iostream>
#include <string>
int main()
{
    //TODO 1st task
    std::cout << "TODO" << std::endl;
    // TODO Do smth

    std::string inputName{}; //���塞 ⥪�⮢�� ��६����� ���
    std::cout << "������ ��� ���" << std::endl;
    std::cin >> inputName; //������塞 ⥪�⮢�� ��६����� �� �����

    int inputAge; //���塞 ��஢�� ��६����� ������
    std::cout << "������ ��� ������" << std::endl;
    std::cin >> inputAge; //������塞 ��஢�� ��६����� �� �����

    std::cout << "��� �����: " << inputName << ". ��� �����: " << inputAge << std::endl; //�뢮��� ��६����

    return 0;
}
