#include"header.h"

void citire(int *v, int &n)
{
	int i;
	cout <<" n= ";
	cin >> n;
	for (i = 0;i < n;i++) {
		cout << "\nv[" << i << "] = ";
		cin >> v[i];
	}
}

void afisare(int v[], int n)
{
	int i;
	cout << endl << "v: ";
	for (i = 0;i < n;i++)
		cout << v[i] << " ";
	cout << endl;
}

void sortare(int *v, int n)
{
	int i, j,aux;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if (v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

void citire(float *v, int &n)
{
	int i;
	cout << " n= ";
	cin >> n;
	for (i = 0;i < n;i++) {
		cout << "\nv[" << i << "] = ";
		cin >> v[i];
	}
}

void afisare(float v[], int n)
{
	int i;
	cout << endl<<"v: ";
	for (i = 0;i < n;i++)
		cout << v[i] << " ";
	cout << endl;
}

void sortare(float *v, int n)
{
	int i, j;
	float aux;
	for (i = 0;i<n - 1;i++)
		for (j = i + 1;j<n;j++)
			if (v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}

void citire(char *s,int &n)
{
	cout << " n= ";
	cin >> n;
	getchar();
	cout << "s= ";
	gets_s(s, n+1);
}

void afisare(char s[])
{
	cout << endl<< "s: "<<s;
}

void sortare(char *s,int n)
{
	int i, j;
	char aux;
	for (i = 0;i<n - 1;i++)
		for (j = i + 1;j<n;j++)
			if (s[i] > s[j]) {
				aux = s[i];
				s[i] = s[j];
				s[j] = aux;
			}
}
