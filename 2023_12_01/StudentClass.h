#pragma once

class StudentClass : public Human
{
public: // �ӽ÷� ��� �����ʹ� public
	StudentClass();
	~StudentClass();

	// �ٴѴ� (�ൿ����)
	// void Daninda();

	// �ٴѴ� (���� Ŭ������)
	Daninda* daninda;

	// "�׼�" ����
	vector<Action*> actions; // "�׼�"�� ���ַ� ��������� �ൿ���� ����

	string MyCourse;

	// ���⼭ �ٴϴ� �п��� ��� ������ ���� ���� ������ ��ȣ���� 1:1 ������ �ƴ� ���� �־
	// �п� �����ʹ� �ٸ� ������ ����� �� Ŭ�����ʹ� ������ �ϵ���

	int score;
};

