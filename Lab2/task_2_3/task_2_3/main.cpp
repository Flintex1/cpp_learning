#include <QCoreApplication> /* ������砥� ������⥪� QCoreApplication */
#include <iostream> /* ������砥� ������⥪� ��� �����/�뢮�� */
#include <stdio.h> /* ������砥� ������⥪� ��� printf */

const int sizeArray = 10;
float userInput[sizeArray]; //���栫����㥬 ���ᨢ

float sumFloatNumbers = 0; //��६����� ��� �㬬�஢���� �ᥫ � ���ᨢ�
float result; //��६����� �뢮��

void sumNumbersInputArray() //��⠥� ���祭�� �� ���ᨢ� � ����塞 �।��� ��䬥��᪮�
{
  for (int i = 0; i < 10; ++i) {
    sumFloatNumbers += userInput[i];
    result = sumFloatNumbers/sizeArray;
    }
    std::cout << "***�।��� ��䬥��᪮� �������� �ᥫ = " << result << std::endl;
}

int main()
{
    std::cout << "****������ �।���� ��䬥��᪮�� ��� �ᥫ � ������饩 �窮�*****" << std::endl; // �뢮� ᮮ�饭��

    int i{}; //���樠�����㥬 ���稪 �������� �ᥫ
    while (i < sizeArray) //������塞 ���ᨢ ���짮��⥫�᪨� ������
        {
           std::cout << "������ �᫮ � ������饩 �窮� �" << i+1 << std::endl;
           std::cin >> userInput[i];
           i++;

           //�஢�ઠ �� ���� �ᥫ
           if (std::cin.fail()) {
                   std::cin.clear();
                   std::cin.ignore();
                   std::cout << "�� ����� �� �᫮. ������ ᭮��!" << std::endl;
                   return 1;
            }
        }

    sumNumbersInputArray();
    return 0;
}
