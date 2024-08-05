#include <iostream>

int main() {
    // ���樠������ ��६�����
    int m = 300;
    float fx = 300.6;
    char cht = 'z';

    // ����� ���祭�� ��६�����
    std::cout << "�����⥫�: �த�������஢��� �ᯮ�짮����� �����஢ & � *:" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "m = " << m << std::endl;
    std::cout << "fx = " << fx << std::endl;
    std::cout << "cht = " << cht << std::endl;
    std::cout << std::endl;

    // �뢮� ���ᮢ ��६�����
    std::cout << "�ᯮ�짮����� & ������:" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "���� m = " << &m << std::endl;
    std::cout << "���� fx = " << &fx << std::endl;
    std::cout << "���� cht = " << static_cast<void*>(&cht) << std::endl;  // static_cast ��� ���४⭮�� �⮡ࠦ���� ���� char
    std::cout << std::endl;

    // �ᯮ�짮����� 㪠��⥫��
    int *pM = &m;
    float *pFx = &fx;
    char *pCht = &cht;

    std::cout << "�ᯮ���� ������� & � *:" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "���祭�� �� ����� m = " << *&m << std::endl;
    std::cout << "���祭�� �� ����� fx = " << *&fx << std::endl;
    std::cout << "���祭�� �� ����� cht = " << *&cht << std::endl;

    // �뢮� ���ᮢ 㪠��⥫��
    std::cout << "�ᯮ���� ⮫쪮 ��६����� 㪠��⥫�:" << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "���� m = " << pM << std::endl;
    std::cout << "���� fx = " << pFx << std::endl;
    std::cout << "���� cht = " << static_cast<void*>(pCht) << std::endl;  // static_cast ��� ���४⭮�� �⮡ࠦ���� ���� char
    std::cout << std::endl;

    // �뢮� ���祭�� �� 㪠��⥫�
    std::cout << "�ᯮ�짮����� ⮫쪮 ������ 㪠��⥫�:" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "���祭�� �� ����� m = " << *pM << std::endl;
    std::cout << "���祭�� �� ����� fx = " << *pFx << std::endl;
    std::cout << "���祭�� �� ����� cht = " << *pCht << std::endl;

    return 0;
}
