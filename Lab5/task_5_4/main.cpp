#include <iostream>

int main() {
    int n;

    // ����訢��� ������⢮ ����⮢ � ���짮��⥫�
    std::cout << "������ ������⢮ ����⮢ ���ᨢ�: ";
    std::cin >> n;

    // �������᪮� �뤥����� ����� ��� ���ᨢ�
    int* arr = new int[n];

    // ���� ����⮢ ���ᨢ�
    std::cout << "������ ������ ���ᨢ�:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // �����⥫� ptr 㪠�뢠�� �� ��砫� ���ᨢ� arr
    int* ptr = arr;

    // ����� ����⮢ ���ᨢ� � ������� 㪠��⥫� ptr
    for (int i = 0; i < n; ++i) {
        std::cout << "ptr[" << i << "] -> " << (ptr + i) << " = " << ptr[i] << std::endl;
    }


    // �᢮�������� �뤥������ �����
    delete[] arr;

    return 0;
}
