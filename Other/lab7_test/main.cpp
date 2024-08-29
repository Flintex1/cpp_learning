#include <iostream>
#include <fstream>
#include <cstdlib> // ��� �ᯮ�짮����� exit()
int main() {
using namespace std;
// ofstream �ᯮ������ ��� ����� ������ � 䠩�
ofstream outf("test.txt"); // ������ 䠩� SomeText.txt � ��४�ਨ ᡮન �஥��
ifstream inf("test.txt"); // ���뢠�� 䠩� SomeText.txt � ��४�ਨ ᡮન �஥��
// �᫨ �� �� ����� ������ ��� 䠩� ��� ����� ������ � ����
if (!outf) {
// �� �뢮��� ᮮ�饭�� �� �訡�� � �믮��塞 exit()
cerr << "Uh oh, SomeText.txt could not be opened for writing!" << endl;
exit(1);
} else cout << "file outf.isOpen" << '\n';
// �����뢠�� � 䠩� ᫥���騥 ��� ���窨
outf << "See line #1!" << endl;
outf << "See line #2!" << endl;
outf.put('c');
outf << endl;
// ��� �஢�ન ������ 䠩�� �㦨� �㭪�� is_open.
if (inf.is_open()) {
cout << "file in.isOpen" << '\n';
// ���� ���� �����, ����� �� ����� ������
while (inf) {
// �� ��६�頥� �� ����� � ��ப�, ������ ��⥬ �뢮��� �� �࠭
string strInput;
getline(inf, strInput);
cout << strInput << endl;
}
}
return 0;
// ����� outf �멤�� �� ������ ��������, �������� ����� ofstream ��⮬���᪨ ���஥� ��� 䠩�
}
