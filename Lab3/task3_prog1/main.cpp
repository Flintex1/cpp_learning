#include <iostream>

//1 Функция для вычисления куба числа
double cube(double value) {
    return value * value * value;
}

//2 Функция для вывода символа в символьном и десятичном виде
void printCharInfo(char character) {
    std::cout << "Введенный символ: " << character << std::endl;
    std::cout << "Его десятичное значение: " << static_cast<int>(character) << std::endl;
}

//3 Функция инициализации и вывода диапазонов значений

// ДОПИСАТЬ!!!!

// 4. Глобальная и локальная переменные с одинаковым именем
int globalVariable = 100;

void showLocalAndGlobalVariables() {
    int localVariable = 200;
    std::cout << "Локальная переменная: " << localVariable << std::endl;
    std::cout << "Глобавльная переменная: " << globalVariable << std::endl;
}

// 5. Вывод функции с параметрами по умолчанию
void printChar(int c='a', char b='b', char c2='c', char d='d') {
    std::cout << "Значения: " << static_cast<char>(c) << ", " << b << ", " << c2 << ", " << d << std::endl;
}

// 6. Перегрузка функций
int substract(int a) {
    std::cout << "Число: " << a << " Тип: int, Размер: " << sizeof(a) << " байт" << std::endl;
}

float substract(float a) {
    std::cout << "Число: " << a << " Тип: float, Размер: " << sizeof(a) << " байт" << std::endl;
}
// 7. Функции поиска максимума, минимума и сдвига
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int shiftLeft(int value, int bits) {
    std::cout << "До сдвига: " << value << std::endl;
    int result = value << bits;
    std::cout << "После сдвига: " << result << std::endl;
    return result;
}

int shiftRight(int value, int bits) {
    std::cout << "До сдвига: " << value << std::endl;
    int result = value >> bits;
    std::cout << "После сдвига: " << result << std::endl;
    return result;
}

int main() {


    // 1. Ввод и вычисление куба числа
    std::cout << "*** КУБ ***" << std::endl;
    double num;
    std::cout << "Введите число: ";
    std::cin >> num;
    std::cout << "Куб числа " << num << " равен " << cube(num) << std::endl;


    // 2. Ввод символа и вывод его информации
    std::cout << "*** СИМВОЛ ***" << std::endl;
    char ch;
    std::cout << "Введите символ: ";
    std::cin >> ch;
    printCharInfo(ch);

    // 3. Инициализация переменных и вывод их диапазонов
    std::cout << "*** ИНИЦИАЛИЗАЦИЯ ПЕРЕМЕННЫХ ***" << std::endl;
   // ДОПИСАТЬ!!!!

    // 4. Демонстрация локальной и глобальной переменной
    std::cout << "*** ЛОКАЛЬНАЯ И ГЛОБАЛЬНАЯ ПЕРЕМЕННАЯ ***" << std::endl;
    showLocalAndGlobalVariables();

    // 5. Вызов функции с параметрами, заданными по умолчанию
    std::cout << "*** ВЫВОД ФУНКЦИИ С ПАРАМЕТРАМИ ПО УМОЛЧАНИЮ ***" << std::endl;
    printChar();
    printChar('x');
    printChar('x', 'y');
    printChar('x', 'y', 'z');
    printChar('x', 'y', 'z', 'w');

    // 6. Перегрузка функций
    std::cout << "*** ПЕРЕГРУЗКА ФУНКЦИИ ***" << std::endl;
    float floatVar(3.14);
    substract(floatVar);

    int intVar(666);
    substract(intVar);

    // 7. Поиск максимума, минимума и сдвиг
    std::cout << "*** МИНИМУМ И МАКСИМУМ ***" << std::endl;
    //int a = 1, b = 200;
    std::cout << "Введите два разных числа через пробел: ";
    int a,b;
    std::cin >> a >> b;
    std::cout << "Большее число: " << findMax(a, b) << std::endl;
    std::cout << "Меньшее число: " << findMin(a, b) << std::endl;

    std::cout << "*** СДВИГ ВЛЕВО***" << std::endl;
    shiftLeft(2, 2);
    std::cout << "*** СДВИГ ВПРАВО***" << std::endl;
    shiftRight(2, 2);

    return 0;
}
