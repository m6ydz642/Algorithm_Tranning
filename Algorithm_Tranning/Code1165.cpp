#include <iostream>

using namespace std;

class Code1165
{
public:
    void GetCode1165Function()
    {

        // 1153 : 축구의 신 1
        int GameMinute = 0;
        int TeamScore =0;
        int Sum =0;
        int Score = 0;

        cin >> GameMinute;
        cin >> TeamScore;

        for (int i = GameMinute; i < 90; i + 5) 
        {
            Score++;
        }
        TeamScore += Score;
        cout << "합계 예상 점수 : " << TeamScore;



    }
};