#include <iostream>
using namespace std;
int main() {

    // 1089 : [기초-종합] 수 나열하기1
    {
        int a = 0, b, c = 0;
        int sum = 0;
        // 변수에 누적하는 누적합 방식 
        cin >> a; // 시작값 a
        cin >> b; // 등차값 d
        cin >> c; // 몇번만큼 
   
        
        // 반복문으로 풀기
        sum = a; // 입력 받은 값 시작 값으로 설정
        for (int i = a; i < c; i++) {
            sum += b;
        }
        cout << sum << endl;

        // 공식으로 풀기 
        
            
            int value = 0;
            value = a + (c-1) * b;
            cout << "공식으로 풀기 : " + value << endl;
        

    }
    return 0;
}
