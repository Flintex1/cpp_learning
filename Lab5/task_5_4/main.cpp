#include <iostream>

int main() {

    // ������� ��ப�
    std::cout << "������� 5" << std::endl;

    //���塞 ���ᨢ � 㪠��⥫��
    int* ptr = new int[5];

    for (auto i=0; i < 5; ++i) {
        *(ptr+i)=i;
    }

    for (auto i=0; i < 5; ++i) {
        std::cout << *(ptr+i) << std::endl;
    }

    return 0;
}
