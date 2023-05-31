#pragma once
class CRandom
{
public:
	CRandom();		// srand() 호출하기 위한 생성자
	int getSRP();	// 상대의 가위, 바위, 보를 랜덤 생성 후 반환
};

