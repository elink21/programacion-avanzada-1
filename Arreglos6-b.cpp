#include <bits/stdc++.h>
using namespace std;

int main()
{
	float arr[9];
	for(int i=0;i<9;i++)
	{
		cout<<"Inserte el elemento arr["<<i<<"] :";
		cin>>arr[i];
	}

	cout<<"\n\nEste es el arreglo con salida formateada: \n\n";
	for(int i=0;i<9;i++)
	{
		if( (i+1)%3==0)cout<<"\n";
		cout<<arr[i]<<"\t";
	}
}