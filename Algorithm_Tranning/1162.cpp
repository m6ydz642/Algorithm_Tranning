// 1162 : ����� ���ָ� �� �帳�ϴ� 1 

#include <iostream>
using namespace std;

int main() {

    int year;
    int month;
    int day;

    cin >> year;
    cin >> month;
    cin >> day;

    // �⵵ ���
    int number = year - month + day;

    // ������ ���� �ڸ� 0ã��
    int FirstDigits = number % 1000;
    int MidleDigits = FirstDigits % 100;
    int LastDigits = MidleDigits % 10; // ������ �ڸ��� Ȯ��

    //cout << "FirstDigits " << FirstDigits << endl; // ù��° �ڸ�
    //cout << "MidleDigits " << MidleDigits << endl; // �߰��ڸ�
    //cout << "LastDigits " << LastDigits << endl; // ������ ����

    if (MidleDigits % 10 == 0) // ������ �ڸ����� 0�̸�
        cout << "���" << endl;
    else
        cout << "�׷�����" << endl;

   

    // �Ǵ� 

    if (LastDigits == 0)
        cout << "���2" << endl;
    else
        cout << "�׷�����2" << endl;

    return 0;
}
// https://www.codeup.kr/problem.php?id=1162 
// ������ 