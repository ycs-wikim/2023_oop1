#pragma once

/**
* @brief	���� ����� Ȯ���ϴ� Ŭ����
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
    // ���� ����� ��ȯ�ϴ� �������̽�
    int WhoWin(int, int);   // �Լ� ���������� ���� �̸��� ��� �ȴ�.
    const char* WhoWinStr(int, int);   // ���� ����� ���ڿ��� ����
    const char* strSRP(int);    // 0, 1, 2�� ����, ����, �� ���ڿ��� ��ȯ
};

