
// �º������� Ǯ�� �ڵ� ����
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

    cout << "FirstDigits " << FirstDigits << endl;
    cout << "MidleDigits " << MidleDigits << endl;
    cout << "LastDigits " << LastDigits << endl;

    if (MidleDigits % 10 == 0) // ������ �ڸ����� 0�̸�
        cout << "���" << endl;

    return 0;
}
// https://www.codeup.kr/problem.php?id=1162 
// ������ 