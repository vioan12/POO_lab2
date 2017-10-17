#include"header.h"

int main()
{
	int x1[50], x2[50], x3[50], x4[50];
	int* vect;
	int n;

	n = generare_n();

	vect = new int[n];

	generare(n, x1);
	afisare(n, x1);
	generare(n, x2);
	afisare(n, x2);
	generare(n, x3);
	afisare(n, x3);
	generare(n, x4);
	afisare(n, x4);
	vect = add(n, x1, x2);

	vect = add(n, x1, x2,x3);
	reset_vector(n, vect);
	vect = add(n, x1, x2, x3,x4);
	afisare(n, vect);

	delete[] vect;
	return 0;
}
