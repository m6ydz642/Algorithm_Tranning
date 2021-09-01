#include <iostream>
using namespace std;
int main() {

    // 1090 : [기초-종합] 수 나열하기2
    {
        int a, r, n = 0;
        // 변수에 누적하는 누적합 방식 
        cin >> a; // 시작값 a
        cin >> r; // 등비값 r
        cin >> n; // 몇번만큼 

        int sum = 1;
        for (int i = 1; i < n; i++) {
            a *= r;
        }
        cout << a << endl;

       
    }
    return 0;
}
