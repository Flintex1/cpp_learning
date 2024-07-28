#include <QCoreApplication> /* Подключаем библиотеку QCoreApplication */
#include <iostream> /* Подключаем библиотеку для ввода/вывода */
#include <stdio.h> /* Подключаем библиотеку для printf */

const int sizeArray = 10;
float userInput[sizeArray]; //Иницализируем массив

float sumFloatNumbers = 0; //Переменная для суммирование чисел в массиве
float result; //Переменная вывода

void sumNumbersInputArray() //Считаем значения из массива и вычисляем среднее арифметическое
{
  for (int i = 0; i < 10; ++i) {
    sumFloatNumbers += userInput[i];
    result = sumFloatNumbers/sizeArray;
    }
    std::cout << "***Среднее арифметическое введеных чисел = " << result << std::endl;
}

int main()
{
    std::cout << "****Рассчет среднего арифметического для чисел с плавающей точкой*****" << std::endl; // вывод сообщения

    int i{}; //инициализируем счетчик введеных чисел
    while (i < sizeArray) //Заполняем массив пользовательским вводом
        {
           std::cout << "Введите число с плавающей точкой №" << i+1 << std::endl;
           std::cin >> userInput[i];
           i++;

           //Проверка на ввод чисел
           if (std::cin.fail()) {
                   std::cin.clear();
                   std::cin.ignore();
                   std::cout << "Вы ввели не число. Повторите снова!" << std::endl;
                   return 1;
            }
        }

    sumNumbersInputArray();
    return 0;
}
