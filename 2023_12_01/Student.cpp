#include "Loader.h"

Student::Student()
{
	// 기본 생성자 사용 시 익명의, 20살의 학생 생성
	this->name = "기본 학생";
	this->course = "국립학교";
	this->age = 20;
	this->gender = 0;
}

Student::Student(std::string name, std::string course, int age, int gender)
{
	this->name = name;
	this->course = course;
	this->age = age;
	this->gender = gender;
}

void Student::IntroduceMe()
{
	// 가지고 있는 데이터를 기반으로 나를 소개하기
	cout << "내 이름은 " << name << "입니다." << endl;
	cout << "나는 " << age << "살 입니다." << endl;
	cout << "내가 다니는 곳은 " << course << "입니다." << endl;
}
