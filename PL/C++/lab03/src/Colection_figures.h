#ifndef COLECTION_FIGURES_H
#define COLECTION_FUGURES_H
#include "Geometric_figures.h"
#include "error.h"

class Colection
{
private:
	geometric_figures** fig;
	int c_count; 
public:
	Colection(int count);
	geometric_figures* operator[] (int n) const;
	geometric_figures*& operator[] (int n);
	int get_count();
	void add_end(geometric_figures* figure);
	void add_index(geometric_figures* figure, int index);
	void del_end();
	void del_index(int index);
	~Colection();
};
#endif // !COLECTION_FIGURES_H
