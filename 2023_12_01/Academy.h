#pragma once

class Academy
{
public:
	Academy();
	~Academy();

	string name;

	// 여기서 다니는 학원을 멤버 변수로 만들 수도 있지만 상호간에 1:1 대응이 아닐 수도 있어서
	// 학원 데이터는 다른 곳에서 만들고 이 클래스와는 소통을 하도록
};

