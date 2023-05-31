#pragma once

/**
* @brief	게임 결과를 확인하는 클래스
*/
class CBoard
{
private:
    int m_board[3][3] = {
        {0, 1, 2},
        {2, 0, 1},
        {1, 2, 0}
    };

public:
    // 게임 결과를 반환하는 인터페이스
    int WhoWin(int, int);   // 함수 원형에서는 변수 이름이 없어도 된다.
    const char* WhoWinStr(int, int);   // 게임 결과를 문자열로 받음
    const char* strSRP(int);    // 0, 1, 2를 가위, 바위, 보 문자열로 반환
};

