#include "CMyClass.h"

// �������� : ����� ������ ������ �ۼ��Ѵ�.

CMyClass::CMyClass()
{
	m_x = 0;
	m_y = 9;

	printf("������\n");
}


void CMyClass::DispMyClass()
{
	printf("DISP: %d %d\n", m_x, m_y);
}