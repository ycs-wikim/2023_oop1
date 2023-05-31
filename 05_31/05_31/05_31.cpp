// 05_31.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "CBoard.h"
#include "CRandom.h"


class CGameInfo
{
private:
    int winCnt;     // 이긴 횟수
    int loseCnt;    // 진 횟수
    int drawCnt;    // 비긴 횟수
public:
    CGameInfo() { winCnt = 0; loseCnt = 0; drawCnt = 0; }
    // 이긴 횟수 증가
    void IncWin() { winCnt++; }
    // 진 횟수 증가
    void IncLose() { loseCnt++; }
    // 비긴 횟수 증가
    void IncDraw() { drawCnt++; }
    // 이긴 횟수 반환
    int WinCount() { return winCnt; }
    // 진 횟수 반환
    int LoseCount() { return loseCnt; }
    // 비긴 횟수 반환
    int DrawCount() { return drawCnt; }
    // 나의 이긴 확률
    float ViewStat()
    {
        return (float)winCnt / (winCnt + loseCnt + drawCnt) * 100;
    }
};

int main()
{
    int me = -1, you = -1;      // 나와 상대의 가위, 바위, 보 값 보관 변수
    CBoard board;
    CRandom rnd;
    CGameInfo gi;
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << "나의 가위(0), 바위(1), 보(2)를 입력하세요 : ";
        std::cin >> me;
        // 상대의 가위, 바위, 보를 랜덤으로 획득
        you = rnd.getSRP();   // 0, 1, 2

        std::cout << "ME[" << board.strSRP(me) << "] YOU[" << board.strSRP(you) << "]\n";
        std::cout << "게임 결과 : " << board.WhoWinStr(me, you) << std::endl;
        // 정보 누적
        switch (board.WhoWin(me, you))
        {
        case 0:
            gi.IncDraw();
            break;
        case 1:
            gi.IncWin();
            break;
        case 2:
            gi.IncLose();
            break;
        default:
            break;
        }
        std::cout << gi.WinCount() << " " << gi.LoseCount() << " " << gi.DrawCount() << std::endl;
        std::cout << gi.ViewStat() << std::endl;
    }
}











/*
class CTest
{
public:
    int m_Value = 0;
    // 연산자 재정의 : 재정의한 연산자 앞에 반드시 객체가 위치해야 한다.
    CTest operator + (int arg)
    {
        CTest t;
        t.m_Value = m_Value + arg;
        return t;
    }
    CTest operator ++ (int arg);
    CTest operator - (int arg);
    CTest operator -- (int arg);
    CTest operator * (int arg);
    CTest operator / (int arg);
    CTest operator % (int arg);
    CTest operator < (int arg);
    CTest operator <= (int arg);
    CTest operator == (int arg);
    CTest operator & (int arg);
    CTest operator && (int arg);
    CTest operator | (int arg);
    CTest operator ^ (int arg);
    /*
    CTest operator ! (int arg);    
    CTest operator . (int arg);
    CTest operator -> (int arg);
    * /
};


int main()
{
    CTest t;
    t.m_Value = 1;

    CTest s1 = t + 2;           // 객체 + 상수 : 재정의된 연산자가 적용
    //CTest s2 = 2 + t;           // 상수 + 객체 : 원래 +의 동작을 수행 ==> 에러
    std::cout << "Hello World!\n" << s1.m_Value << "\n";
}
*/