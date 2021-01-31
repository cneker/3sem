#ifndef WORKSHOP
#define WORKSHOP
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#define NAME_SIZE 20  //Размер имени

using namespace std;

class Workshop { //Класс Служащий
private:
	char* name, * chief; //Имя, начальник
	int count; //Количество работающих
public:
	Workshop(); //Конструктор без параметров
	Workshop(const char* name, const char* chief, int count); // Конструктор с параметрами
	Workshop(const Workshop& data); //Конструктор копирования
	~Workshop(); //Деструктор

	char* get_name(); //Возврат имени
	char* get_chief(); //Возврат начальник
	int get_count(); //Возврат количества
	void set_name(const char* name); //Присваивание имени
	void set_chief(const char* chief); //Присваивание начальника
	void set_count(int count); //Присваивание количества рабочих
	void show(); //Вывод информации
};
#endif
