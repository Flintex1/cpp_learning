#include <iostream>
#include <list>

// �㭪�� ��� ���������� �।���� ��䬥��᪮�� � ����� ᯨ᪠
void addAverageToList(std::list<double>& newList) {

    // ����塞 �㬬� ��� ����⮢ ᯨ᪠
    //i - ����� ᯨ᪠
    double sum;
    for (double i : newList) {
        sum += i;
    }

    // ����塞 �।��� ��䬥��᪮�
    double average = sum / newList.size();

    // ������塞 �।��� ��䬥��᪮� � ����� ᯨ᪠
    newList.push_back(average);
}

int main() {
    // ������塞 ��砫�� ᯨ᮪
    std::list<double> numbers = {1.1, 2.2, 3.3, 4.4};

    std::cout << "���᮪ �� ���������� �।����: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ������塞 �।��� ��䬥��᪮� � ����� ᯨ᪠
    addAverageToList(numbers);

    std::cout << "���᮪ ��᫥ ���������� �।����: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
