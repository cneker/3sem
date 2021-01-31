#include "person.h"
#include "worker.h"
#include "engineer.h"
#include "clerk.h"

using namespace std;

int main()
{
	system("color F0");
	clerc cl1("Ivan", "Skinder", 2);
	//cl1.add_list();
	clerc cl2("Lobster", "Dopaminovich", 3);
	//cl2.add_list();
	cl1.show();
	cl2.show();
	cout << endl;

	worker* wr1 = new worker();
	//wr1->add_list();
	wr1->set("Rodya", "Ogorod", 2);
	wr1->show();
	cout << endl;

	engineer en1;
	//en1.add_list();
	en1.set("Vanya", "Lobster", 4, 12);
	en1.show();
	cout << endl;

	person::look_up();
	delete wr1;
	return 0;
}