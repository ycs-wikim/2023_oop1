#include "CBoard.h"

int CBoard::WhoWin(int me, int you)
{
	return m_board[you][me];
}

const char* CBoard::WhoWinStr(int me, int you)
{
	switch (m_board[you][me])
	{
	case 0:		// ����.
		return "��ܽ�";
	case 1:		// ���� �̰��.
		return "���� �̰ܽ�";
	case 2:		// ���� ����.
		return "���� ����";
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
		return "����";
	case 1:
		return "����";
	case 2:
		return "��";
	default:
		break;
	}
	return nullptr;
}
