#include <iostream>
#include <string>
#include <cctype> // ��� �㭪樨 isdigit

// �㭪�� ��� ����⠭������� ��室��� ��ப� �� 㯠�������� ��ப�
std::string unpackString(const std::string& packed) {
    std::string unpacked;
    int n = packed.length();
    for (int i = 0; i < n; ++i) {
        // �᫨ ⥪�騩 ᨬ��� - ���
        if (isdigit(packed[i])) {
            int count = 0;
            // ���뢠�� �� ���� (� ��砥 �᫨ �᫮ ����� 9)
            while (i < n && isdigit(packed[i])) {
                count = count * 10 + (packed[i] - '0');
                ++i;
            }
            // ������騩 ᨬ��� - �� �㪢�
            if (i < n && isalpha(packed[i])) {
                unpacked.append(count, packed[i]);
            }
        } else if (isalpha(packed[i])) {
            // �᫨ ⥪�騩 ᨬ��� - �㪢�, ���� ������塞 ��
            unpacked.push_back(packed[i]);
        }
    }
    return unpacked;
}

int main() {
    std::string packed;
    std::cout << "������ 㯠�������� ��ப� (�ਬ. 4A4B2C3D): ";
    std::cin >> packed;

    std::string unpacked = unpackString(packed);

    std::cout << "��室��� ��ப�: " << unpacked << std::endl;

    return 0;
}
