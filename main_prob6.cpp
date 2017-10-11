#include"header.h"

int main()
{
	int v_i[100],n_i,n_f, n_c;
	float v_f[100];
	char c[100];
	
	citire(v_i, n_i);
	afisare(v_i, n_i);
	sortare(v_i, n_i);
	afisare(v_i, n_i);

	citire(v_f, n_f);
	afisare(v_f, n_f);
	sortare(v_f, n_f);
	afisare(v_f, n_f);
	
	citire(c, n_c);
	afisare(c);
	sortare(c,n_c);
	afisare(c);

	return 0;
}