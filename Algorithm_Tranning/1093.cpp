#include <stdio.h>
#include <iostream>
using namespace std;

bool CallNumber() {
	// 1093 : [기초-1차원배열] 이상한 출석 번호 부르기1
	bool valuestatus = false;
	int n, i, t;
	int a[24] = { 0 };
	/*****************************************************/
	// 첫 번째 줄에 출석 번호를 부른 횟수인 정수 n이 입력된다. (1 ~10000)
	// 두 번째 줄에는 무작위로 부른 n개의 번호(1 ~23)가 공백을 두고 순서대로 입력된다.
	/*****************************************************/


	// scanf_s("%d", &n); //개수 입력받기
	cin >> n;
	if (n <= 10000 && n >= 1) {
		valuestatus = true;
		for (i = 1; i <= n; i++) //개수만큼 입력받기
		{
			// scanf_s("%d", &t); //읽어서
			cin >> t;
			a[t] = a[t] + 1; //들어있던 값에 1만큼 더해 다시 저장. a[t]+=1 과 같다.
			// if문으로 갯수를 세지 않고 배열에 숫자를 넣어 + 1씩 증가 시킴
		}
		for (i = 1; i <= 23; i++)
		{
			// printf("%d ", a[i]); //1~23 번 배열에 저장되어있는 값 출력하기
			cout << a[i] << " ";
		}
	}
	return valuestatus;
}

int main() {
	
	CallNumber();
}

