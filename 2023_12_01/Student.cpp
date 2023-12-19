#include "Loader.h"

Student::Student()
{
	// �⺻ ������ ��� �� �͸���, 20���� �л� ����
	this->name = "�⺻ �л�";
	this->course = "�����б�";
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
	// ������ �ִ� �����͸� ������� ���� �Ұ��ϱ�
	cout << "�� �̸��� " << name << "�Դϴ�." << endl;
	cout << "���� " << age << "�� �Դϴ�." << endl;
	cout << "���� �ٴϴ� ���� " << course << "�Դϴ�." << endl;
}
