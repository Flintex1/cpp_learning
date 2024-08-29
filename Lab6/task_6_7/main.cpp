//
// ДЛЯ РАБОТЫ ПРИЛОЖЕНИЯ, В КАТАЛОГЕ СБОРКИ СОЗДАЙТЕ ФАЙЛ INPUT.TXT и внесите туда данные ГОС НОМЕРОВ НА ЛАТИНИЦЕ
//
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <fstream>

using namespace std;

// Набор допустимых символов для букв
const set<char> valid_letters = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};

bool isValidNumber(const string& number) {
    // Проверка на длину номера
    if (number.length() != 6) {
        return false;
    }

    // Проверка первой буквы
    if (valid_letters.find(number[0]) == valid_letters.end()) {
        return false;
    }

    // Проверка трех цифр
    for (int i = 1; i <= 3; i++) {
        if (!isdigit(number[i])) {
            return false;
        }
    }

    // Проверка двух последних букв
    if (valid_letters.find(number[4]) == valid_letters.end() || valid_letters.find(number[5]) == valid_letters.end()) {
        return false;
    }

    return true;
}

int main() {
    //Откпываем файл ввода
    ifstream inputFile;
    inputFile.open("INPUT.txt");

    //Открываем файл вывода
    ofstream outputFile;
    outputFile.open("OUTPUT.txt");

    //Проверка на открытие файла
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

    //Помещаем построчно данные в вектор
    while (getline(inputFile,strInput)) {
        numbers.push_back(strInput);
    }

    // Проверяем каждый номер и выводим результат в файл
    for (const auto& number : numbers) {
        if (isValidNumber(number)) {
            outputFile << "Yes" << endl;
        } else {
            outputFile << "No" << endl;
        }
    }

    cout << "ALL DONE!" << endl;

    inputFile.close();  // Закрываем файл после чтения
    outputFile.close(); // Закрываем файл после записи

    return 0;
}
