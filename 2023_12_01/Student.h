#pragma once

class Student
{
	// �л��̶�� �̸��� Ŭ���� : "�л�" ����� ���� ���赵

	// ���÷� �����ϴ� Ŭ������ ��ŭ �ӽ÷� ��� �����͸� public����

public:
	string course;
	string name;

	int age;
	int gender;

	// ������
	Student();
	Student(string name, string course, int age, int gender);
	
	// �ൿ (�ڱ�Ұ�)
	void IntroduceMe();
};

