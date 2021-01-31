#include "Colection_figures.h"

Colection::Colection(int count)
{
	fig = new geometric_figures*[count];
	for (int i = 0; i < count; i++) {
		fig[i] = NULL;
	}
	c_count = count;
}

geometric_figures* Colection::operator[] (int n) const
{
	if (n < 0 || n >= c_count) {
		throw Index_Error("¬ы вышли за границы массива");
	}
	return fig[n];
}

geometric_figures*& Colection::operator[] (int n)
{
	if (n < 0 || n >= c_count) {
		throw Index_Error("¬ы вышли за границы массива");
	}
	return fig[n];
}

int Colection::get_count()
{
	return c_count;
}

void Colection::add_end(geometric_figures* figure)
{
	geometric_figures** temp = new geometric_figures * [c_count + 1];
	for (int i = 0; i < c_count; i++) {
		temp[i] = fig[i];
	}
	fig = temp;
	temp[c_count] = figure;
	c_count++;
}

void Colection::add_index(geometric_figures* figure, int index)
{
	if (index < 0 || index > c_count) {
		add_end(figure);
		throw Index_Error("¬ы вышли за границы массива, фигура будет добавлена в конец массива");
	}
	geometric_figures** temp = new geometric_figures * [c_count + 1];
	for (int i = 0; i < index; i++) {
		temp[i] = fig[i];
	}
	temp[index] = figure;
	for (int i = index; i < c_count; i++) {
		temp[i + 1] = fig[i];
	}
	fig = temp;
	c_count++;
}

void Colection::del_end()
{
	geometric_figures** temp = new geometric_figures * [c_count - 1];
	for (int i = 0; i < c_count - 1; i++) {
		temp[i] = fig[i];
	}
	fig = temp;
	c_count--;
}

void Colection::del_index(int index)
{
	geometric_figures** temp = new geometric_figures * [c_count - 1];
	for (int i = 0; i < index; i++) {
		temp[i] = fig[i];
	}
	for (int i = index + 1; i < c_count; i++)
	{
		temp[i - 1] = fig[i];
	}
	fig = temp;
	c_count--;
}

Colection::~Colection()
{
	for (int i = 0; i < c_count; i++) {
		if (fig[i] != nullptr) {
			delete fig[i];
		}
	}
}