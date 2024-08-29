#include <iostream>
#include <fstream>
#include <cstdlib> // для использования exit()
int main() {
using namespace std;
// ofstream используется для записи данных в файл
ofstream outf("test.txt"); // Создаём файл SomeText.txt в директории сборки проекта
ifstream inf("test.txt"); // Открываем файл SomeText.txt в директории сборки проекта
// Если мы не можем открыть этот файл для записи данных в него
if (!outf) {
// То выводим сообщение об ошибке и выполняем exit()
cerr << "Uh oh, SomeText.txt could not be opened for writing!" << endl;
exit(1);
} else cout << "file outf.isOpen" << '\n';
// Записываем в файл следующие две строчки
outf << "See line #1!" << endl;
outf << "See line #2!" << endl;
outf.put('c');
outf << endl;
// Для проверки открытия файла служит функция is_open.
if (inf.is_open()) {
cout << "file in.isOpen" << '\n';
// Пока есть данные, которые мы можем прочитать
while (inf) {
// То перемещаем эти данные в строку, которую затем выводим на экран
string strInput;
getline(inf, strInput);
cout << strInput << endl;
}
}
return 0;
// Когда outf выйдет из области видимости, деструктор класса ofstream автоматически закроет наш файл
}
