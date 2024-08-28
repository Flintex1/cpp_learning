#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>

// �㭪�� ��� �뢮�� ᮤ�ন���� ���⥩���
template <typename Container>
void printContainer(const Container& container) {
    // �뢮� � ��אַ� ���浪�
    std::cout << "��אַ� ���冷�: ";
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // �뢮� � ���⭮� ���浪� � �ᯮ�짮������ ���⭮�� �����
    std::cout << "����� ���冷�: ";
    for (auto it = container.rbegin(); it != container.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


int main() {
    int N;

    // ����� ���祭�� N � ���짮��⥫�
    std::cout << "������ ������⢮ ����⮢ (�� 1 �� 1000): ";
    std::cin >> N;

    // �஢�ઠ, �� N ��室���� � �����⨬�� �।����
    if (N < 1 || N > 1000) {
        std::cerr << "�訡��: N ������ ���� � ��������� �� 1 �� 1000." << std::endl;
        return 1;
    }

    // ���樠������ ������� ��砩��� �ᥫ
    std::srand(static_cast<unsigned int>(std::time(0)));

    // �������� ���⥩��� � ������� ��砩��� �ᥫ
    std::vector<int> numbers;
    for (int i = 0; i < N; ++i) {
        // ������� �᫠ � �।���� �� -2*10^3 �� 2*10^3
        int random_number = std::rand() % 200 - 200;
        numbers.push_back(random_number);
    }

    // �뢮� ᮤ�ন���� ���⥩���, �� 10 ����⮢ � ��ப�
    for (int i = 0; i < N; ++i) {
        std::cout << numbers[i] << " ";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }

    // ������ ������⢠ 㭨������ �ᥫ
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    std::cout << "\n������⢮ 㭨������ �ᥫ: " << unique_numbers.size() << std::endl;

    //�뢮� ���⥩��� � ��אַ� � ���⭮� ���浪� �१ �㭪��
    printContainer(numbers);

    return 0;
}
