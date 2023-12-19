#pragma once

// 추상 클래스 Action을 받는 함수로 작성

class Daninda : public Action
{
public:
	// 다닌다는 행동을 나타내는 가장 확실한 방법 : 그냥 함수 만들기
	// 하지만, 이 행동을 여러 클래스에서 공통적으로 쓰고자 한다면 -> 클래스가 더 활용성 높음

	Daninda();
	~Daninda();

	// 다닌다는 실제 행동을 나타내기 위한 함수 (이 클래스가 가리키는 대상의 본질)
	// 추상 클래스의 Act를 받아서 실제 내용 있는 함수로 재작성
	virtual void Act() override;
	// virtual : 가상 함수, 즉 이 함수 혹은 다른 한 쪽은 내용이 없으며, 실제 사용 시 내용이 재작성 되어야 한다는 뜻
	// override : 덮어씌웠음. 즉 이 쪽의 함수가 덮어씌우는 쪽, 다시 말해 실제 사용되는 쪽이라는 뜻

	string myCourse; // "어디에 다니는가?"
};

