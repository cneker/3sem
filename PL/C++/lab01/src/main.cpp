#include <iostream>
#include <Windows.h>
#include "Employee.h"

using namespace std;

Employee cpy(Employee& data) //Конструктор копирования при построении временного объекта как возвращаемого значения функции
{
	Employee temp(data);
	temp.set_name();
	return temp; //Вызов деструктора для объекта temp
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Статистический массив объектов, конструктор без параметров
	Employee e1[3];
	e1[0].show();
	//Конструктор с параметрами и копирования
	Employee e2("Иван", 32, 5), e3=e2;
	e2.show();
	e3.show();
	//Конструктор копирования (передача объекта по значению)
	Employee e4(e3); 
	e4.show();
	//Динамический массив объектов
	Employee* e5 = new Employee[3]; 
	for (int i = 0; i < 3; i++)
		e5[i].set();
	for (int i = 0; i < 3; i++)
		e5[i].show();

	Employee* ptr; //Указатель на объект
	ptr = &e5[0]; //Присваивание указателю адреса другого объекта
	ptr->show(); //Вывод значений полей объекта
	//Конструктор копирования при построении временного объекта как возвращаемого значения функции
	Employee e6 = cpy(e5[1]); 
	e6.show();

	void(Employee:: * pf)(); //Указатель на компонентную функцию
	pf = &Employee::show; //Присваивание адреса
	(e5[2].*pf)(); //Вывод значений полей объекта

	delete[] e5; //Вызов деструктора для массива объектов e5
	return 0; //Вызов деструктора для объектов e6, e4, e3, e2, массива объектов e1
}