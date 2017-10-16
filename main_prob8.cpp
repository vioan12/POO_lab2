#include"header.h"

int main()
{
	int x1[50], x2[50], x3[50], x4[50];
	generare_n();
	generare(x1);
	afisare(x1);
	generare(x2);
	afisare(x2);
	generare(x3);
	afisare(x3);
	generare(x4);
	afisare(x4);
	add(x1, x2);
	afisare(vect);
	reset_vector(vect);
	add(x1, x2,x3);
	afisare(vect);
	reset_vector(vect);
	add(x1, x2, x3,x4);
	afisare(vect);
	return 0;
}