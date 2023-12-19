#pragma once

class StudentClass : public Human
{
public: // 임시로 모든 데이터는 public
	StudentClass();
	~StudentClass();

	// 다닌다 (행동으로)
	// void Daninda();

	// 다닌다 (범용 클래스로)
	Daninda* daninda;

	// "액션" 벡터
	vector<Action*> actions; // "액션"의 범주로 만들어지는 행동들의 벡터

	string MyCourse;

	// 여기서 다니는 학원을 멤버 변수로 만들 수도 있지만 상호간에 1:1 대응이 아닐 수도 있어서
	// 학원 데이터는 다른 곳에서 만들고 이 클래스와는 소통을 하도록

	int score;
};

