#include <iostream>
#include <vector>

// �㭪�� ��� ������ ���� ����⮢ ����� �� ����� ������ ᯨ᪠
std::vector<int> mixVectorWithList(const std::vector<int>& myVector, const std::vector<int>& myList) {
    std::vector<int> result = myVector; // ������� ����� ��室���� ����� ��� ���������
    size_t listIndex = 0; // ������ ��� ��室� �� ᯨ��

    for (size_t i = 0; i < result.size(); ++i) {
        if (result[i] % 2 == 0 && listIndex < myList.size()) { // �஢�ઠ �⭮�� ����� � ������ ����⮢ � ᯨ᪥
            result[i] = myList[listIndex++]; // ������ �⭮�� ����� � ���室 � ᫥���饬� ������ ᯨ᪠
        }
    }

    return result;
}

int main() {
    std::vector<int> someVector;
    std::vector<int> someList;
    int n, m, value;

    // ���� ࠧ��� � ����⮢ �����
    std::cout << "������ ࠧ��� �����: ";
    std::cin >> n;

    std::cout << "������ ������ ����� �१ �஡��:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        someVector.push_back(value);
    }

    // ���� ࠧ��� � ����⮢ ᯨ᪠
    std::cout << "������ ࠧ��� ᯨ᪠: ";
    std::cin >> m;

    std::cout << "������ ������ ᯨ᪠ �१ �஡��:\n";
    for (int i = 0; i < m; ++i) {
        std::cin >> value;
        someList.push_back(value);
    }

    // �뢮� ��室���� �����
    std::cout << "someVector:\n";
    for (int num : someVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // �뢮� ��室���� ᯨ᪠
    std::cout << "someList:\n";
    for (int num : someList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ����஥��� � �뢮� ᬥ蠭���� �����
    std::vector<int> mixedVector = mixVectorWithList(someVector, someList);

    std::cout << "���蠭�� �����:\n";
    for (int num : mixedVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
