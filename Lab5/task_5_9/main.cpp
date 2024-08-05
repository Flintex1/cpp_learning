#include <iostream>
#include <string>

// �㭪�� ��� ��ࠡ�⪨ ��ப�
std::string processString(const std::string& input) {
    std::string result;
    bool inSpace = false; // ���� ��� ��᫥������� �஡����

    for (char ch : input) {
        if (ch == '\t') {
            ch = ' '; // ������ ⠡��樨 �� �஡��
        }

        if (ch == ' ') {
            if (!inSpace) { // �᫨ �� ���� �஡��
                result.push_back(ch);
                inSpace = true; // ��⠭����� 䫠�
            }
        } else {
            result.push_back(ch);
            inSpace = false; // ������ 䫠�, ⠪ ��� �� �� �஡��
        }
    }

    // �������� ��砫��� � ������� �஡����
    if (!result.empty() && result.front() == ' ') {
        result.erase(result.begin());
    }
    if (!result.empty() && result.back() == ' ') {
        result.erase(result.end() - 1);
    }

    return result;
}

int main() {
    std::string input;

    std::cout << "������ ��ப� (���ᨬ��쭮 100 ᨬ�����): ";
    std::getline(std::cin, input);

    if (input.length() > 100) {
        std::cout << "�訡��: ��ப� ᫨誮� �������." << std::endl;
        return 1;
    }

    std::string processed = processString(input);

    std::cout << "��ࠡ�⠭��� ��ப�: \"" << processed << "\"" << std::endl;

    return 0;
}
