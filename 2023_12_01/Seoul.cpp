#include "Loader.h"

Seoul::Seoul()
{
	// �л�, �п� �����
	student = new StudentClass();
	academy = new Academy();

	// �п��� �̸��� �л����� �ֱ�
	student->MyCourse = academy->name; // �� ��鿡 ���� �� �ν��Ͻ��� ������ ����

	Start();
}

Seoul::~Seoul()
{
	delete student;
	delete academy;
}

void Seoul::Start()
{
	// �л� ȣ�� �� �ൿ
	student->IntroduceMyBody(); // �л��� ��ü �Ұ�
	((Daninda*)student->actions[0])->myCourse = student->MyCourse; // �л��� �Ҽӱ���� �ൿ ���� ������ ������ �Ҵ�
	student->actions[0]->Act(); // �ູ Ȱ��ȭ(Activate, �õ�, ����)

	// �п��� ���� ȣ��
	cout << "�� �п��� " << academy->name << "�̶�� �մϴ�" << endl;

	// �� ������� �����̶�� ū ���� �ȿ��� �л��� �п��̶�� ������ �����͸�
	// ���� ���� ���� ���� �� �ִٴ� ����� Ȯ�� ����
}
