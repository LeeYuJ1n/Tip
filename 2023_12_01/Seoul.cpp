#include "Loader.h"

Seoul::Seoul()
{
	// 학생, 학원 만들기
	student = new StudentClass();
	academy = new Academy();

	// 학원의 이름을 학생에게 주기
	student->MyCourse = academy->name; // 한 장면에 나온 두 인스턴스가 정보를 소통

	Start();
}

Seoul::~Seoul()
{
	delete student;
	delete academy;
}

void Seoul::Start()
{
	// 학생 호출 및 행동
	student->IntroduceMyBody(); // 학생의 신체 소개
	((Daninda*)student->actions[0])->myCourse = student->MyCourse; // 학생의 소속기관을 행동 내의 목적지 변수에 할당
	student->actions[0]->Act(); // 행복 활성화(Activate, 시동, 시작)

	// 학원에 대한 호출
	cout << "이 학원은 " << academy->name << "이라고 합니다" << endl;

	// 이 방법으로 서울이라는 큰 범위 안에서 학생과 학원이라는 별개의 데이터를
	// 각각 만들어서 연관 지을 수 있다는 사실을 확인 가능
}
