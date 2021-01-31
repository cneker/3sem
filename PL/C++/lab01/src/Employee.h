#ifndef EMPLOYEEH
#define EMPLOYEEH
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define NAME_SIZE 20  //Размер имени

using namespace std;

class Employee { //Класс Служащий
private:
	char* e_name; //Имя
	int e_age, e_experience; //Возраст и Стаж
public:
	Employee(); //Конструктор без параметров
	Employee(const char* name, int age, int experience); // Конструктор с параметрами
	Employee(const Employee& data); //Конструктор копирования
	~Employee(); //Деструктор
	char* get_name(); //Ввод имени (методы get должны только возвращать значение(НО ТУТ ОНИ НЕ НУЖНЫ))
	int get_age(); //Ввод возраста
	int get_experience(); //Ввод стажа
	void set_name(); //Присваивание имени
	void set_age(); //Присваивание возраста
	void set_experience(); //Присваивание стажа
	void set(); //Вызов функций присваивания полей
	void show(); //Вывод информации
};
#endif
