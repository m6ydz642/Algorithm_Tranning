#include <iostream>
using namespace std;
int main() {

    // 1089 : [����-����] �� �����ϱ�1
    {
        int a = 0, b, c = 0;
        int sum = 0;
        // ������ �����ϴ� ������ ��� 
        cin >> a; // ���۰� a
        cin >> b; // ������ d
        cin >> c; // �����ŭ 
   
        
        // �ݺ������� Ǯ��
        sum = a; // �Է� ���� �� ���� ������ ����
        for (int i = a; i < c; i++) {
            sum += b;
        }
        cout << sum << endl;

        // �������� Ǯ�� 
        
            
            int value = 0;
            value = a + (c-1) * b;
            cout << "�������� Ǯ�� : " + value << endl;
        

    }
    return 0;
}
