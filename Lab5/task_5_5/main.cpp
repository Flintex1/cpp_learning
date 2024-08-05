#include <iostream>

// �㭪�� ��� �����樨 � �뢮�� ��� ����⠭����
void useSwap(char arr[], int first, int last) {

    if (first == last) {
        // �뢮��� ����⠭����
        for (int i = 0; i <= last; ++i) {
            std::cout << arr[i];
        }
        std::cout << std::endl;
    } else {
        for (int i = first; i <= last; ++i) {
            // ����� ����⮢
            std::swap(arr[first], arr[i]);
            // �����ᨢ�� �맮�
            useSwap(arr, first + 1, last);
            // ����� ����⮢ ���⭮
            std::swap(arr[first], arr[i]);
        }
    }
}

int main() {

    // ���樠������ ���ᨢ� ᨬ�����
    char phases[] = {'U', 'V', 'W', 'N'};

    // ����砥� ������⢮ ����⮢ ���ᨢ�
    int phasesSize = sizeof(phases) / sizeof(phases[0]);

    std::cout << "�� ��ਠ��� ����⠭����:" << std::endl;
    useSwap(phases, 0, phasesSize - 1); //����᪠�� �㭪�� � �����ᮬ ��ࢮ�� ����� � ��᫥�����

    return 0;
}
