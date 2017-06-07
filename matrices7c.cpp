#include <bits/stdc++.h>
using namespace std;

int main()
{

	double voltajes[3][5];
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"Por favor, inserte el voltaje ["<<i<<"]["<<j<<"]: ";
			cin>>voltajes[i][j];
			if(voltajes[i][j]<0)
			{
				cout<<"El voltaje anterior no se incluira en el conteo\n por que no es un voltaje valido\n";
			}
		}
	}

	int menor60=0,mayor60=0,mayor70=0,mayor80=0,mayor90=0,fueraDeRango=0;

	for(int i=0;i<3;i++)
	{

		for(int j=0;j<5;j++)
		{
			if(voltajes[i][j]<=0)
			{
				fueraDeRango++;
				
			}
			if(voltajes[i][j]<60 && voltajes[i][j]>0)
			{
				menor60++;
			}
			else if(voltajes[i][j]<70 && voltajes[i][j]>=60)
			{
				mayor60++;
			}
			else if(voltajes[i][j]<80 && voltajes[i][j]>=70)
			{
				mayor70++;
			}
			else if(voltajes[i][j]<90 && voltajes[i][j]>=80)
			{
				mayor80++;
			}
			else mayor90++;
		}
	}

	cout<<"\n\nLos rangos de voltaje son los siguientes:\n\n ";
	cout<<"volt  <  60: "<<menor60<<" elementos\n\n";
	cout<<"60  <=  volt  <  70: "<<mayor60<<"   elementos\n\n";
	cout<<"70  <=  volt  <  80: "<<mayor70<<"   elementos\n\n";
	cout<<"80  <=  volt  <  90: "<<mayor80<<"   elementos\n\n";
	cout<<"volt  >=  90: "<<mayor90<<"   elementos\n";
	cout<<"\n\n->voltajes excluidos por estar fuera de rango: "<<fueraDeRango;

}