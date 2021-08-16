// 1162 : 당신의 사주를 봐 드립니다 1 

#include <iostream>
using namespace std;

int main() {

    int year;
    int month;
    int day;

    cin >> year;
    cin >> month;
    cin >> day;

    // 년도 계산
    int number = year - month + day;

    // 마지막 숫자 자리 0찾기
    int FirstDigits = number % 1000;
    int MidleDigits = FirstDigits % 100;
    int LastDigits = MidleDigits % 10; // 마지막 자리수 확인

    //cout << "FirstDigits " << FirstDigits << endl; // 첫번째 자리
    //cout << "MidleDigits " << MidleDigits << endl; // 중간자리
    //cout << "LastDigits " << LastDigits << endl; // 마지막 숫자

    if (MidleDigits % 10 == 0) // 마지막 자리수가 0이면
        cout << "대박" << endl;
    else
        cout << "그럭저럭" << endl;

   

    // 또는 

    if (LastDigits == 0)
        cout << "대박2" << endl;
    else
        cout << "그럭저럭2" << endl;

    return 0;
}
// https://www.codeup.kr/problem.php?id=1162 
// 문제임 