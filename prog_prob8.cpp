#include"header.h"


int* add(int n, int x1[], int x2[], int x3[], int x4[] )
{
	int vect[50];

	int i;
	for (i = 0;i < n;i++)
	{
		vect[i] = x1[i] + x2[i] + x3[i] + x4[i];
	}

	return vect;
}

void afisare(int n, int *v)
{
	int i;
	cout << endl<<endl;
	for (i = 0;i < n;i++)
		cout << *(v + i) << " ";
}

void generare(int n, int *v)
{
	int i;
	for (i = 0;i < n;i++) {
		*(v + i) = rand() % 1000;
		if (rand() % 2 == 1)
			*(v + i) = (*(v + i))*(-1);
	}
}

int generare_n()
{
	srand(time(NULL));
	return rand() % 50;
}

void reset_vector(int n, int *v)
{
	int i;
	for (i = 0;i < n;i++)
		*(v + i) = 0;
}
