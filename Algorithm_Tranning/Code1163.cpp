#include <iostream>

using namespace std;

class Code1163
{
public:
    void GetCode1163Function()
    {

        // 1163 : 당신의 사주를 봐 드립니다 2
        int year;
        int month;
        int day;

        cin >> year;
        cin >> month;
        cin >> day;

        // 년도 계산
        int number = year + month + day;


        // 세번째 자리수 찾기
        int Digits3 = number % 1000;
        int quotient = Digits3 / 100;
        cout << "세번째 자리수 " << Digits3 << endl; // 세번째 자리
        cout << "세번째 자리수 단일 " << quotient << endl; // 세번째 자리

        if (quotient % 2 == 0)
            cout << "대박" << endl;
        else
            cout << "그럭저럭" << endl;
    }
};