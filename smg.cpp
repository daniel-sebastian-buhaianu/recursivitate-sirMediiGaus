#include <iostream>
#include <cmath>
using namespace std;
int a0, b0;
void citesteVariabila(const char*, int &);
double a(int);
double b(int);
int main()
{
	int n;
	citesteVariabila("a(0)", a0);
	citesteVariabila("b(0)", b0);
	citesteVariabila("n", n);
	cout << "a(n): " << a(n) << '\n';
	cout << "b(n): " << b(n);
	return 0;
}
double b(int n)
{
	if (n == 0) return b0;
	return sqrt(a(n-1)*b(n-1));
}
double a(int n)
{
	if (n == 0) return a0;
	return (a(n-1) + b(n-1))/2;
}
void citesteVariabila(const char* nume, int & valoare)
{
	cout << nume << " = ";
	cin >> valoare;
}
