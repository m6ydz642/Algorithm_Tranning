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

        int sum = 1;
        for (int i = 1; i < n; i++) {
            a *= r;
        }
        cout << a << endl;

       
    }
    return 0;
}
