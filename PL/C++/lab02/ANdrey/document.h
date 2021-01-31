#ifndef DOCUMENT_H
#define DOCUMENT_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Document
{
protected:
	char* type;
public:
	Document(); //����������� �� ���������
	static Document* head; //��������� �� ������ ������
	Document* next; //��������� �� ��������� ��������� ������
	virtual void show() = 0; //������� (�����������/����� �����������) ��������� ����������� �����������
	void add_list(); //���������� ���������� � ������
	static void look_up(); //�������� ������
	virtual ~Document(); //����������
};

#endif // !DOCUMENT_H