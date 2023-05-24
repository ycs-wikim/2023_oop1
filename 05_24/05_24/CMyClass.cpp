#include "CMyClass.h"

// 구현파일 : 설계된 내용을 실제로 작성한다.

CMyClass::CMyClass()
{
	m_x = 0;
	m_y = 9;

	printf("생성자\n");
}


void CMyClass::DispMyClass()
{
	printf("DISP: %d %d\n", m_x, m_y);
}