#include <iostream>
using namespace std;
int main() {

    // 1089 : [����-����] �� �����ϱ�1
    // �����Ϸ��� �Է��� �������ؼ� �ϵ� �ڵ����� 
    {
        int a, b, c = 0;
        // ������ �����ϴ� ������ ��� 
        cin >> a; // ���۰� a
        cin >> b; // ������ d
        cin >> c; // �����ŭ 
   
        int sum = 1;
        for (int i = 1; i < c; i++) {
            a += b;
        }
        cout << a << endl;

    }
    return 0;
}
