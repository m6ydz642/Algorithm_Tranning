#include <iostream>
using namespace std;
int main() {

    // 1089 : [기초-종합] 수 나열하기1
    // 컴파일러가 입력을 지원안해서 하드 코딩으로 
    {
        int a, b, c = 0;
        // 변수에 누적하는 누적합 방식 
        cin >> a; // 시작값 a
        cin >> b; // 등차값 d
        cin >> c; // 몇번만큼 
   
        int sum = 1;
        for (int i = 1; i < c; i++) {
            a += b;
        }
        cout << a << endl;

    }
    return 0;
}
