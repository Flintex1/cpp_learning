#include <iostream>
#include <string>
int main()
{
    //TODO 1st task
    std::cout << "TODO" << std::endl;
    // TODO Do smth

    std::string inputName; //���塞 ⥪�⮢�� ��६����� ���
    std::cout << "������ ��� ���" << std::endl;
    std::cin >> inputName; //���樠�����㥬 ⥪�⮢�� ��६����� �� �����

    int inputAge; //���塞 ��஢�� ��६����� ������
    std::cout << "������ ��� ������" << std::endl;
    std::cin >> inputAge; //���樠�����㥬 ��஢�� ��६����� �� �����

    std::cout << "��� �����: " << inputName << ". ��� �����: " << inputAge << std::endl; //�뢮��� ��६����
    std::cout << "inputName is " << sizeof(inputName) << std::endl;

    return 0;
}
