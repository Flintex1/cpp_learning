#include <iostream>

int unit8() {

    int n = 10; // ��࠭�祭�� ��ப ��ࠬ���

    int i = 1;

    //����᪠�� 横� ���� i �� �㤥� ࠢ�� n
    while (i <= n) {
            int sum = 0;

        // �뢮� �஡���� ��� �ନ஢���� ��ࠬ���
        for (int k = 0; k < n - i; ++k) {
            std::cout << " "; // �஡�� ��� ��ࠢ�������
        }

        // �뢮� �ᥫ �� i �� 1 ��� ������ ��ப�
        for (int j = i; j >= 1; --j) {
            std::cout << j << " ";
            sum += j;
        }

        // �뢮��� �㬬� �ᥫ � ��᫥���� ��ப� � ���室�� � ����� ��ப�
        std::cout << ' ' << sum << std::endl;

        i++; //�த������ 横�
    }

    return 0;

}
