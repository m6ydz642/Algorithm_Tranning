#include <iostream>

using namespace std;

class Code1163
{
public:
    void GetCode1163Function()
    {

        // 1163 : ����� ���ָ� �� �帳�ϴ� 2
        int year;
        int month;
        int day;

        cin >> year;
        cin >> month;
        cin >> day;

        // �⵵ ���
        int number = year + month + day;


        // ����° �ڸ��� ã��
        int Digits3 = number % 1000;
        int quotient = Digits3 / 100;
        cout << "����° �ڸ��� " << Digits3 << endl; // ����° �ڸ�
        cout << "����° �ڸ��� ���� " << quotient << endl; // ����° �ڸ�

        if (quotient % 2 == 0)
            cout << "���" << endl;
        else
            cout << "�׷�����" << endl;
    }
};