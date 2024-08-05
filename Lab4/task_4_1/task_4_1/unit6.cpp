#include <iostream>

// ���⨢��� �㭪�� ��� ���᫥��� 䠪�ਠ��
long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// �����ᨢ��� �㭪�� ��� ���᫥��� 䠪�ਠ��
long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

int unit6() {

     int n; //���짮��⥫�᪨� ���� �᫮ ��� �����
     char userChoice; //���짮��⥫�᪨� ���� �롮� �㭪樨 �����

     // ���� �᫠
     std::cout << "������ �᫮ ��� ���᫥��� 䠪�ਠ��: ";
     std::cin >> n;

     // �஢�ઠ �� ����⥫쭮� �᫮
     if (n < 0) {
         std::cout << "����⥫쭮 �᫮ ����饭�!" << std::endl;
         return 1;
     }

     // �롮� ��⮤� ���᫥��� 䠪�ਠ��
     std::cout << "�롥�� ��⮤ ����⥭��: 1 - ����� ��� 2 - ४����: ";
     std::cin >> userChoice;

     long long result;
     if (userChoice == '1') {
         result = factorialIterative(n);
         std::cout << "����ਠ� �᫠ " << n << " ࠢ�� " << result << std::endl;
     } else if (userChoice == '2') {
         result = factorialRecursive(n);
         std::cout << "����ਠ� �᫠ " << n << " ࠢ�� " << result << std::endl;
     } else {
         std::cout << "���ࠢ���� ����!" << std::endl;
     }
     return 0;
}
