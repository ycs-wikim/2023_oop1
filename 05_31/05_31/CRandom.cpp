#include "CRandom.h"

#include <stdlib.h>     // ���� ���� ������ ���� ���
#include <time.h>       // ���� ���� ������ ���� ���

CRandom::CRandom()
{
	// ���� �õ� �� ������ ���� �Լ�. time() �Լ��� ���� ����ϴ� ���� �Ϲ���
	// ���� �ÿ� �� �ѹ��� �����ϸ� ���� �õ尡 ���������� ����
	srand((unsigned int)time(NULL));
}

int CRandom::getSRP()
{
	return rand() % 3;
}
