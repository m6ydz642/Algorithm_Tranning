
// 태블릿으로 풀던 코드 문제
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

    cout << "FirstDigits " << FirstDigits << endl;
    cout << "MidleDigits " << MidleDigits << endl;
    cout << "LastDigits " << LastDigits << endl;

    if (MidleDigits % 10 == 0) // 마지막 자리수가 0이면
        cout << "대박" << endl;

    return 0;
}
// https://www.codeup.kr/problem.php?id=1162 
// 문제임 