#include "Loader.h"

Human::Human()
{
	body = new Body(); // 신체 만들기
	body->name = "동체";

	body->AddBody("심장과 폐"); // 동체 밑에 장기 만들기
	body->chainBody->AddBody("팔과 다리"); // 장기 밑에 (순서가 이상하지만) 팔다리 만들기
}

Human::~Human()
{
	delete body;
}

void Human::IntroduceMyBody()
{
	cout << "내 신체에는 " << body->name << "이 있습니다" <<endl;

	// 신체에 부속 부위가 있을 경우 해당 부위도 이야기하기
	Body* next = body->chainBody;

	// 부속 부위가 널 포인터가 아니라면
	while (next != nullptr)
	{
		// 부속 부위의 이름도 이야기하고
		cout << "내 신체에는 " << next->name << "도 있습니다" << endl;

		// 다음 부속 부위 지정하기
		next = next->chainBody;
	}
}
