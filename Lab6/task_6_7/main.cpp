//
// ��� ������ ����������, � �������� ������ �������� ���� INPUT.TXT � ����� �㤠 ����� ��� ������� �� ��������
//
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <fstream>

using namespace std;

// ����� �����⨬�� ᨬ����� ��� �㪢
const set<char> valid_letters = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};

bool isValidNumber(const string& number) {
    // �஢�ઠ �� ����� �����
    if (number.length() != 6) {
        return false;
    }

    // �஢�ઠ ��ࢮ� �㪢�
    if (valid_letters.find(number[0]) == valid_letters.end()) {
        return false;
    }

    // �஢�ઠ ��� ���
    for (int i = 1; i <= 3; i++) {
        if (!isdigit(number[i])) {
            return false;
        }
    }

    // �஢�ઠ ���� ��᫥���� �㪢
    if (valid_letters.find(number[4]) == valid_letters.end() || valid_letters.find(number[5]) == valid_letters.end()) {
        return false;
    }

    return true;
}

int main() {
    //�⪯뢠�� 䠩� �����
    ifstream inputFile;
    inputFile.open("INPUT.txt");

    //���뢠�� 䠩� �뢮��
    ofstream outputFile;
    outputFile.open("OUTPUT.txt");

    //�஢�ઠ �� ����⨥ 䠩��
    if (inputFile.is_open()) {
        cout << "INPUT.TXT FILE OPENED" << endl;
    } else {
        cerr << "ERROR OPEN INPUT.TXT FILE! PROBABLY MISSING!" << endl;
        exit(1);
    }

    if (outputFile.is_open()) {
        cout << "OUTPUT.TXT FILE OPENED" << endl;
    } else {
        cerr << "ERROR OPEN OUTPUT.TXT FILE! CHECK READ-WRITE PERMISSION!" << endl;
        exit(1);
    }

    string strInput;
    vector<string> numbers;

    //����頥� �����筮 ����� � �����
    while (getline(inputFile,strInput)) {
        numbers.push_back(strInput);
    }

    // �஢��塞 ����� ����� � �뢮��� १���� � 䠩�
    for (const auto& number : numbers) {
        if (isValidNumber(number)) {
            outputFile << "Yes" << endl;
        } else {
            outputFile << "No" << endl;
        }
    }

    cout << "ALL DONE!" << endl;

    inputFile.close();  // ����뢠�� 䠩� ��᫥ �⥭��
    outputFile.close(); // ����뢠�� 䠩� ��᫥ �����

    return 0;
}
