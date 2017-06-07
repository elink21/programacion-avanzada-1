#include <bits/stdc++.h>
using namespace std;

int calificaciones[5][5];
string nombres[]={"Jose Luis","Alfredo","Rodrigo",
"Coralina","Avril"};
int main()
{
	for(int i=0;i<5;i++)
	{
		cout<<"Dame las calificaciones de: "<<nombres[i]<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"\nCalificacion "<<j+1<<":";
			cin>>calificaciones[i][j]; 
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\nLas calificaciones de: "<<nombres[i]<<" son: "<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"\t"<<calificaciones[i][j]; 
		}
	}
	return 0;
}