/*
* ������ୠ� ࠡ�� No1
* ��᫥������� �����-�뢮�� �⠭���⭮� ������⥪� �++
* ���� ������
* Developer:
*/
/*==========================================================================*/
/* INCLUDE LIBS */
/*==========================================================================*/
#include <QCoreApplication> /* ������砥� ������⥪� QCoreApplication */
#include <iostream> /* ������砥� ������⥪� ��� �����/�뢮�� */
#include <stdio.h> /* ������砥� ������⥪� ��� printf */
//using namespace std; /* ����࠭�⢮ ���� std */

/*==========================================================================*/
/* ���樠������ ��६����� */
/*==========================================================================*/

double weightIndex,weight;
int age,height,choice;
bool gender;
char genderTxt;

/*==========================================================================*/
/* funcBrock - �㭪�� ���᫥��� ������ ����� ⥫� �� ��㫥 �ப� */
/*==========================================================================*/

int funcBrock(int age,int weight,int height,bool gender) {
    if (gender) {
       weightIndex= (height - 100)*0.9;
    }
    else {
       weightIndex= (height - 100)*0.85;
    }
    return weightIndex;
}

/*==========================================================================*/
/* funcIMT - �㭪�� ���᫥��� ������ ����� ⥫� �� ��㫥 �ப� */
/*==========================================================================*/

double funcIMT(int age,int weight,int height) {
    weightIndex = weight / ((height*0.01)*(height*0.01));
    return weightIndex;
}


/*==========================================================================*/
/* main - ������� �㭪�� � ���ன ��稭����� �ᯮ������ �ணࠬ�� */
/*==========================================================================*/
int main(int argc, char *argv[])
{
std::cout << "****�������� ��� ����� �����쭮�� ���*****" << std::endl; // �뢮� ᮮ�饭��


first:
std::cout << "������ ᢮� ������ (������ ���) � ������ ������� ����� (ENTER) ";
std::cin >> age;
std::cout << "������ ᢮� ��� � ������ ������� ����� (ENTER) ";
std::cin >> weight;
std::cout << "������ ᢮� ��� � � � ������ ������� ����� (ENTER) ";
std::cin >> height;
std::cout << "������ ��� (1 - ��稭�, 0 - ���騭�)  � ������ ������� ����� (ENTER) ";
std::cin >> gender;

if (gender) {
    genderTxt = '�';
}
else {
    genderTxt = '�';
}

second:
std::cout << "��� ������: " << age << " ��� ���: " << weight << "��. ��� ���: " << height << "�. ��� ���: " << genderTxt << std::endl;
std::cout << "�᫨ ��� �訡�� - �롥�� ���� ������ ���. � ��⨢��� ��砥 ������ 0, ��� ����� �����."<< std::endl;
std::cout << "1 - ���㫠 �ப�. 2 - ���"<< std::endl;
std::cin >> choice;

if (choice == 1) {
 weightIndex = funcBrock(age,weight,height,gender);
 std::cout << "��� ������� ��� �� ��㫥 �ப�: " << weightIndex << std::endl;
 if (weightIndex>weight){
    std::cout << "��� ⥪�騩 ���: "<<weight<< " ��. ��� ����� ��� - " << weightIndex-weight << "��."<< std::endl;
 }
 else {
     std::cout << "��� ⥪�騩 ���: "<<weight<< " ��. ��� ������� ��� - " << weight-weightIndex << "��."<< std::endl;
 }

}
else if (choice == 2) {
  std::cout << "��� ������ ⥫� �� ��㫥 ���: " << funcIMT(age,weight,height) << std::endl;

}
else if (choice == 0) {
    goto first;
}
else {
    std::cout << "�� ����� ����୮� ���祭��, ������ �롮�!" << std::endl;
    goto second;
}



if (age >= 19 && age <= 24 ) {



}



} /* ������� ᪮��� - ����砭�� ����� �⥩⬥��, ���� �⭮��騩�� � �㭪樨 main */


