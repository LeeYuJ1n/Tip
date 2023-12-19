#pragma once

class Student
{
	// 학생이라는 이름의 클래스 : "학생" 만들기 위한 설계도

	// 예시로 존재하는 클래스인 만큼 임시로 모든 데이터를 public으로

public:
	string course;
	string name;

	int age;
	int gender;

	// 생성자
	Student();
	Student(string name, string course, int age, int gender);
	
	// 행동 (자기소개)
	void IntroduceMe();
};

