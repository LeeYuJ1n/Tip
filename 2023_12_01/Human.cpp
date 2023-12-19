#include "Loader.h"

Human::Human()
{
	body = new Body(); // ��ü �����
	body->name = "��ü";

	body->AddBody("����� ��"); // ��ü �ؿ� ��� �����
	body->chainBody->AddBody("�Ȱ� �ٸ�"); // ��� �ؿ� (������ �̻�������) �ȴٸ� �����
}

Human::~Human()
{
	delete body;
}

void Human::IntroduceMyBody()
{
	cout << "�� ��ü���� " << body->name << "�� �ֽ��ϴ�" <<endl;

	// ��ü�� �μ� ������ ���� ��� �ش� ������ �̾߱��ϱ�
	Body* next = body->chainBody;

	// �μ� ������ �� �����Ͱ� �ƴ϶��
	while (next != nullptr)
	{
		// �μ� ������ �̸��� �̾߱��ϰ�
		cout << "�� ��ü���� " << next->name << "�� �ֽ��ϴ�" << endl;

		// ���� �μ� ���� �����ϱ�
		next = next->chainBody;
	}
}
