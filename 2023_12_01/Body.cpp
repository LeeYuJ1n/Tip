#include "Loader.h"

// 학생을 만들기 위해, 인간을 만들 텐데
// 그 인간의 멤버 변수가 될 신체를 가장 먼저 작성

Body::Body()
{
	name = "기본 신체 부위";
	chainBody = nullptr;
}

// Body::Body(std::string additionalBody)
// {
// 	name = "현대 미지정";
// 	chainBody = new Body();
// 	chainBody->name = additionalBody; // 매개변수가 "이" 부위가 아니라 "부속지"의 이름임에 주의
// }

Body::~Body()
{
	// 포인터 인스턴스(직접 할당한 것) -> 만들면 지워야 한다
	if (chainBody != nullptr) delete chainBody;
}

void Body::AddBody(std::string additionalBody)
{
	chainBody = new Body();
	chainBody->name = additionalBody; // 매개변수가 "이" 부위가 아니라 "부속지"의 이름임에 주의
}
