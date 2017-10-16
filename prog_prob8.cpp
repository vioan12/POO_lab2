#include"header.h"


void add(int x1[], int x2[], int x3[] = 0 , int x4[] = 0 )
{
	int i;
	for (i = 0;i < n;i++)
		vect[i] = x1[i] + x2[i] + x3[i] + x4[i];
}

void afisare(int *v)
{
	int i;
	cout << endl<<endl;
	for (i = 0;i < n;i++)
		cout << *(v + i) << " ";
}

void generare(int *v)
{
	int i;
	for (i = 0;i < n;i++) {
		*(v + i) = rand() % 1000;
		if (rand() % 2 == 1)
			*(v + i) = (*(v + i))*(-1);
	}
}

void generare_n()
{
	srand(time(NULL));
	n = rand() % 50;
}

void reset_vector(int *v)
{
	int i;
	for (i = 0;i < n;i++)
		*(v + i) = 0;
}