#pragma once

class Body
{
public:
	Body();
	// Body(std::string additionalBody); // 추가 신체가 있을 경우 이 생성자 사용
	~Body();

	void AddBody(string additionalBody);

	string name; // 이 신체 구조의 이름
	Body* chainBody; // 이 신체와 순서상 연결된 다른 곳이 있다면 여기에 할당
};

