#include <iostream>
using namespace std;

int V = 0; //���樠������ ��६����� ᪮���
int V1 = 0; //���樠������ ��६����� ��砫쭮� ᪮���
double R = 0; //���樠������ ��६����� ࠤ��� ��㣠
double C = 0; //���樠������ ��६����� ����� ���㦭���
int S = 0; //���樠������ ��६����� ����ﭨ�
int t = 0; //���樠������ ��६����� �६�
double a = 0; //���樠������ ��६����� �᪮७��


//�㭪�� ���᫥��� ��אַ�������� ᪮���
int StraighLineSpeed(int S, int t) {
    if (S <= 0 ) {
        cout << "�����ﭨ� �� ����� ���� ࠢ�� ��� ����� 0" << endl;
    }
    else if (t <= 0 ) {
        cout << "�६� �� ����� ���� ࠢ�� ��� ����� 0" << endl;
    }
    else {
        V = S/t;
    }
    return V;
}

//�㭪�� ���᫥��� �᪮७��
double Acceleratin (int V1, int V, int t) {
    a = (V - V1)/t;
    return a;
}
//�㭪�� ���᫥��� ࠤ��� ��㣠
double CircleRadius (double C) {
    const double PI = 3.14;
    R = C/(2*PI);
    return R;
}

int main()
{

    int TaskChoice = 0; //���樠������ ��६����� �롮�

    cout << "������ ���� ��࠭���� ���᫥���" << endl;
    cout << "1) ������� ��אַ��������� ��������" << endl;
    cout << "2) �᪮७��" << endl;
    cout << "3) ������ ��㣠" << endl;

    cin >> TaskChoice;  //���짮��⥫�᪨� ����

    /* �ᯮ��㥬 ��������� ᢨ�-���� ��� �।��⠢����� �롮� �㦭�� ����
     * ����⠫ ⠪�� ५����� �������� 㤮����
     * */

    switch (TaskChoice) {
    case 1: //������� ��אַ��������� ��������
        cout << "���᫥��� ᪮��� ��אַ��������� �������� (�� ����ﭨ� � �६���)" << endl;
        cout << "������ ���祭�� ����ﭨ� S (�)" << endl;
        cin >> S;
        cout << "������ ���祭�� �६��� t (�)" << endl;
        cin >> t;
        StraighLineSpeed(S,t);
        cout << "������� ��אַ��������� �������� ࠢ��: " << V << "�/�" << endl;
        break;
    case 2: //�᪮७��
        cout << "���᫥��� �᪮७�� (�� ��砫쭮� ᪮���, ����筮� ᪮��� � �६���)" << endl;
        cout << "������ ���祭�� ��砫쭮� ᪮��� V1 (�/c)" << endl;
        cin >> V1;
        cout << "������ ���祭�� ����筮� ᪮��� V (�/c)" << endl;
        cin >> V;
        cout << "������ ���祭�� �६��� t (�)" << endl;
        cin >> t;
        cout << "�᪮७�� ࠢ��: " <<  Acceleratin(V1,V,t) << "�/�";
        break;
    case 3: //������ ��㣠
        cout << "���᫥��� ࠤ��� ��㣠 (�� ����� ��� ���㦭���)" << endl;
        cout << "������ ����� ���㦭��� � (��)" << endl;
        cin >> C;
        cout << "������ ��㣠 ࠢ��: " << CircleRadius(C) << "��" << endl;
        break;
    default:
        cout << "������ �롮�! ���㬠�� �� ࠧ ��� ᢮�� �롮஬" << endl;
        break;
}

}

