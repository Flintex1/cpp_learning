#include <iostream>

// �㭪�� ��� ���᫥��� �᫠ ��������
long long fibonacciIterative(int n) {

    // ���� �ᮠ �������� ��-㬮�砭��
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long prev = 0;  // �।��饥 �᫮ ��������
    long long current = 1; // ����饥 �᫮ ��������
    long long sum; //�㬬� ᫮�����

    for (int i = 2; i <= n; ++i) {
        sum = prev + current;
        prev = current;
        current = sum;
    }

    return sum;
}


int unit7() {

    int fibonacciNumber;

    std::cout << "������ �᫮ ��������:" << std::endl;
    std::cin >> fibonacciNumber;

    for (int count = 0; count < fibonacciNumber; ++count) {
        //��⠥� � �뢮��� �᫠
        std::cout << fibonacciIterative(count) << " ";
    }
    std::cout << std::endl; // ���室 �� ����� ��ப� ��᫥ �뢮�� ��� �ᥫ
    return 0;
}
