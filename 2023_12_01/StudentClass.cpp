#include "Loader.h"

StudentClass::StudentClass()
	: Human() // 상속받은 클래스는 상위 생성자를 같이 만들어줘야 한다
{
	MyCourse = "불명의 기관";
	score = 100;

	daninda = new Daninda();

	// 액션 인터페이스에 따른 다니기 인스턴스도 만들기
	Action* act = new Daninda();
	actions.push_back(act); // 새로 만든 행동 넣기

	// 나중에 시험치기, 급식먹기 등 계속해서 행동이 추가되어야 한다면
	// 해당 행동을 Action*로 할당해서 벡터에서 마찬가지로 넣으면 된다
}

StudentClass::~StudentClass()
{
	delete daninda;

	for (int i = 0; i < actions.size(); ++i)
	{
		delete actions[i];
	}
}

// 클래스로 대체되어 함수는 주석
// void StudentClass::Daninda()
// {
// 	std::cout << "나는 지금 " << MyCourse << "에 다니고 있습니다" << std::endl;
// 	std::cout << "내 점수는 " << score << "점 입니다" << std::endl;
// }
