#include <iostream>
#include <cstdlib>
using namespace std;

 static double apuesta=0.0;
 static int opc=0;
static int n=0;
void ControlarTiro(double apuesta)
{
	for (int i=0; i<=10; i++)
	{	
	n=1 + rand()%10;
}

	if(n == 1 || n ==3 || n == 9)
	{
		apuesta = apuesta + 123;
		cout<<"el monto gano "<<apuesta<<endl;
	}
	if(n == 2 || n == 4 || n == 10)
	{
		apuesta = apuesta - apuesta;
		cout<<"usted ah perdido todo "<<apuesta<<endl;
	}
	if(n == 5 || n == 6 || n ==7 || n == 8)
	{
		apuesta = apuesta * 4;
		cout<<"usted ah triplicado su apuesta, ahora tiene "<<apuesta<<endl;	
	}
}

int main()
{
	do
	{
	cout<<endl<<"1.- jugar"<<endl;
	cout<<"2.- salir"<<endl;
	cin>>opc;
	switch(opc)
	{
	case 1:
		
	cout<<"ingrese la apuesta"<<endl;
	cin>>apuesta;
	ControlarTiro(apuesta);
		break;
		
		case 2:
	cout<<"\t\t\t\t\thasta luego"<<endl;
		
	break;
	
	default:cout<<"OPCION NO VALIDA"<<endl;
	}
	} while(opc!=2);
	
	
	return 0;
}


