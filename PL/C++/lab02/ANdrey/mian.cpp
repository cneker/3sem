#include "document.h"
#include "receipt.h"
#include "cheque.h"
#include "invoice.h"

using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "rus");
	Invoice cl1("���������", "��������");
	//cl1.add_list();
	Invoice cl2;
	cl2.set("���������", "������������");
	//cl2.add_list();
	cl1.show();
	cl2.show();
	cout << endl;

	Receipt* wr1 = new Receipt();
	//wr1->add_list();
	wr1->set("���������", "��������");
	wr1->show();
	cout << endl;

	Cheque en1("���������", "��������", 127111);
	//en1.add_list();
	en1.show();
	cout << endl;

	Document::look_up();
	delete wr1;
	return 0;
}