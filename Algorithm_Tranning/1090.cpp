#include <iostream>
using namespace std;
int main() {

    // 1090 : [����-����] �� �����ϱ�2
    {
        int a, r, n = 0;
        // ������ �����ϴ� ������ ��� 
        cin >> a; // ���۰� a
        cin >> r; // ��� r
        cin >> n; // �����ŭ 

       long long int sum = a;
        
        for (int i = 1; i < n; i++) {
            sum *= r;
        }
        cout << sum << endl;

       
    }
    return 0;
}
