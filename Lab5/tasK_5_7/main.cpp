#include <iostream>
#include <cctype> // ��� �㭪権 islower, isupper, tolower, toupper

// �㭪�� ��� ������ ���祭�� ���� � ������ �祥� ���ᨢ�
void swapEvenOdd(char* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        std::swap(arr[i], arr[i + 1]);
    }
}

// �㭪�� ��� ��������� ॣ���� �㪢 � ���ᨢ�
void toggleCase(char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        if (std::islower(arr[i])) {
            arr[i] = std::toupper(arr[i]);
        } else if (std::isupper(arr[i])) {
            arr[i] = std::tolower(arr[i]);
        }
    }
}

int main() {
    // ���樠������ ���ᨢ� �� 12 ����⮢
    char arr[12] = {'a', 'B', 'c', 'D', 'e', 'F', 'g', 'H', 'i', 'J', 'k', 'L'};

    // �뢮� ���ᨢ� �� ���������
    std::cout << "���ᨢ �� ���������:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // �맮� �㭪樨 ��� ������ ���祭�� ���� � ������ �祥�
    swapEvenOdd(arr, 12);

    // �뢮� ���ᨢ� ��᫥ ������ ���祭��
    std::cout << "���ᨢ ��᫥ ������ ���祭�� ���� � ������ �祥�:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // �맮� �㭪樨 ��� ��������� ॣ���� �㪢
    toggleCase(arr, 12);

    // �뢮� ���ᨢ� ��᫥ ��������� ॣ����
    std::cout << "���ᨢ ��᫥ ��������� ॣ����:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
