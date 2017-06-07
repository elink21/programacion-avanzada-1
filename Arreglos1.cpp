/* Author: jgarcia */
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	double resistencia[] = {0, 16, 27, 39, 56, 81};
	double corriente[6];
	double potencia[6];
	for (int i = 1; i <= 5; i++) {
		cout << "corriente " << i << ":" << endl;
		cin >> corriente[i];
	}
//para calcular las 5 potencias
	for (int i = 1; i <= 5; i++) {
		potencia[i] = resistencia[i] *
		pow(corriente[i], 2);
	}
	cout << "Resistencia\tCorriente\t\tPotencia" << endl;
	for (int i = 1; i <= 5; i++) {
		cout << resistencia[i] << "\t\t\t"
		<< corriente[i] << "\t\t"
		<< potencia[i] << "\t" << endl;
	}
//para sumar el total de potencia
	double sumaPotencia=0;
	for(int i=1;i<=5;i++){
		sumaPotencia=sumaPotencia+potencia[i];
	}
	cout<<"\t\t\t\t\t___________"<<endl;
	cout<<"Total:\t\t\t\t\t"<<sumaPotencia<<endl;
	return 0;
}



