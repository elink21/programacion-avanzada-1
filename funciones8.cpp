#include <bits/stdc++.h>
using namespace std;

double poli_dos( double a, double b, double c, double x)
{
	return (a*(x*x))+(b*x)+(c);
}

int main()
{
	double a,b,c,x;
	cout<<"El polinomio esta en la forma < ax^2+bx+c >\n";
	cout<<"Inserte el valor de (a): ";
	cin>>a;
	cout<<"Ahora inserte el valor de (b) ";
	cin>>b;
	cout<<"Inserte el valor de (c): ";
	cin>>c;
	cout<<"Finalmente inserte el valor de (x): ";
	cin>>x;
	cout<<"El valor del polinomio es: "<<poli_dos(a,b,c,x);
}