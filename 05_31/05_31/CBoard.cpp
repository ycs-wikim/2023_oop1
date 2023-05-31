#include "CBoard.h"

int CBoard::WhoWin(int me, int you)
{
	return m_board[you][me];
}

const char* CBoard::WhoWinStr(int me, int you)
{
	switch (m_board[you][me])
	{
	case 0:		// 비겼다.
		return "비겨쏘";
	case 1:		// 내가 이겼다.
		return "내가 이겨쏘";
	case 2:		// 내가 졌소.
		return "내가 져쏘";
	default:
		break;
	}
	return nullptr;
}

const char* CBoard::strSRP(int srp)
{
	switch (srp)
	{
	case 0:
		return "가위";
	case 1:
		return "바위";
	case 2:
		return "보";
	default:
		break;
	}
	return nullptr;
}
