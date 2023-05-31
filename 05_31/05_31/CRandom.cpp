#include "CRandom.h"

#include <stdlib.h>     // 랜덤 숫자 생성을 위한 헤더
#include <time.h>       // 랜덤 숫자 생성을 위한 헤더

CRandom::CRandom()
{
	// 랜덤 시드 값 변경을 위한 함수. time() 함수와 같이 사용하는 것이 일반적
	// 실행 시에 단 한번만 실행하면 랜덤 시드가 지속적으로 변경
	srand((unsigned int)time(NULL));
}

int CRandom::getSRP()
{
	return rand() % 3;
}
