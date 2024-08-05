#include <iostream>
#include <vector>
#include <algorithm>

// �㭪�� ��� ���஢�� ��ப �� �����
bool compareByLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}

// �㭪�� ��� ����� ��ப ���짮��⥫��
void inputStrings(std::vector<std::string>& strings) {
    std::string input;
    std::cout << "������ ��ப� (���ᨬ��쭮 25 ��ப, ������ ��ப� �� ����� 80 ᨬ�����). ������ ������ ��ப� ��� �����襭�� �����:" << std::endl;
    while (strings.size() < 25) {
        std::getline(std::cin, input);
        if (input.empty()) {
            break;
        }
        if (input.length() > 80) {
            std::cout << "�訡��: ��ப� ᫨誮� �������. ��������, ������ ��ப� �� ����� 80 ᨬ�����." << std::endl;
            continue;
        }
        strings.push_back(input);
    }
}

// �㭪�� ��� �롮� ⨯� ���஢��
char getSortChoice() {
    char choice;
    std::cout << "�롥�� ᯮᮡ ���஢�� (1 - �� �����, 2 - �� ��䠢���): ";
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ������㥬 ���⮪ �����
    return choice;
}

// �᭮���� �㭪��
int main() {
    std::vector<std::string> strings;

    // ���� ��ப
    inputStrings(strings);

    // �롮� ⨯� ���஢��
    char choice = getSortChoice();

    // ����஢�� ��ப � ����ᨬ��� �� �롮� ���짮��⥫�
    if (choice == '1') {
        std::sort(strings.begin(), strings.end(), compareByLength);
    } else if (choice == '2') {
        std::sort(strings.begin(), strings.end());
    } else {
        std::cout << "�����४�� �롮�. �����襭�� �ணࠬ��." << std::endl;
        return 1;
    }

    // �뢮� �����஢����� ��ப
    std::cout << "�����஢���� ��ப�:" << std::endl;
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
