#include "Loader.h"

StudentClass::StudentClass()
	: Human() // ��ӹ��� Ŭ������ ���� �����ڸ� ���� �������� �Ѵ�
{
	MyCourse = "�Ҹ��� ���";
	score = 100;

	daninda = new Daninda();

	// �׼� �������̽��� ���� �ٴϱ� �ν��Ͻ��� �����
	Action* act = new Daninda();
	actions.push_back(act); // ���� ���� �ൿ �ֱ�

	// ���߿� ����ġ��, �޽ĸԱ� �� ����ؼ� �ൿ�� �߰��Ǿ�� �Ѵٸ�
	// �ش� �ൿ�� Action*�� �Ҵ��ؼ� ���Ϳ��� ���������� ������ �ȴ�
}

StudentClass::~StudentClass()
{
	delete daninda;

	for (int i = 0; i < actions.size(); ++i)
	{
		delete actions[i];
	}
}

// Ŭ������ ��ü�Ǿ� �Լ��� �ּ�
// void StudentClass::Daninda()
// {
// 	std::cout << "���� ���� " << MyCourse << "�� �ٴϰ� �ֽ��ϴ�" << std::endl;
// 	std::cout << "�� ������ " << score << "�� �Դϴ�" << std::endl;
// }
