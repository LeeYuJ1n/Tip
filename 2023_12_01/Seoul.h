#pragma once

class Seoul
{
public:
	// 서울 클래스 : "배경"의 역할을 하기 위한 큰 클래스
	// 게임으로 치면 Scene의 역할을 한다

	// 여기에서 학생도 나오고, 학원도 나오고
	// 서로간에 정보를 할당시켜서 동기화 시키고
	// 학생 출력도 한다

	Seoul();
	~Seoul();

	void Start(); // 서울 "장면" 시작

	StudentClass* student; // 학생이 나오고
	Academy* academy; // 학원이 나온다
};

