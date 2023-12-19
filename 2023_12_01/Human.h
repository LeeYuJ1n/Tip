#pragma once

class Human
{
public:
	Human();
	~Human();

	// 신체 정보 -> 동체 -> 장기 -> 사지말단 순으로 (순서는 이상하지만)

	Body* body; // 인간의 "몸"이 하나의 멤버 변수가 있고, 그 몸 안에 부속부위가 있는 것으로


	void IntroduceMyBody();
};

