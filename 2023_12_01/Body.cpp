#include "Loader.h"

// �л��� ����� ����, �ΰ��� ���� �ٵ�
// �� �ΰ��� ��� ������ �� ��ü�� ���� ���� �ۼ�

Body::Body()
{
	name = "�⺻ ��ü ����";
	chainBody = nullptr;
}

// Body::Body(std::string additionalBody)
// {
// 	name = "���� ������";
// 	chainBody = new Body();
// 	chainBody->name = additionalBody; // �Ű������� "��" ������ �ƴ϶� "�μ���"�� �̸��ӿ� ����
// }

Body::~Body()
{
	// ������ �ν��Ͻ�(���� �Ҵ��� ��) -> ����� ������ �Ѵ�
	if (chainBody != nullptr) delete chainBody;
}

void Body::AddBody(std::string additionalBody)
{
	chainBody = new Body();
	chainBody->name = additionalBody; // �Ű������� "��" ������ �ƴ϶� "�μ���"�� �̸��ӿ� ����
}
