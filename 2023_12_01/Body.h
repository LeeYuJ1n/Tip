#pragma once

class Body
{
public:
	Body();
	// Body(std::string additionalBody); // �߰� ��ü�� ���� ��� �� ������ ���
	~Body();

	void AddBody(string additionalBody);

	string name; // �� ��ü ������ �̸�
	Body* chainBody; // �� ��ü�� ������ ����� �ٸ� ���� �ִٸ� ���⿡ �Ҵ�
};

