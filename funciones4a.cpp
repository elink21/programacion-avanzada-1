#include <bits/stdc++.h>
using namespace std;

double trianguloRectangulo( double a, double b)
{
	return sqrt(a*a+b*b);
}

int main()
{
	double cat1,cat2;
	cout<<"Inserte el valor del primer cateto: ";
	cin>>cat1;
	cout<<"Ahora inserte el segundo cateto: ";
	cin>>cat2;
	cout<<"El valor de la hipotenusa es: "<<trianguloRectangulo(cat1,cat2);
}