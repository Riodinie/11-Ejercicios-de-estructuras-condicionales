/*8. Elabore un c�digo que solicite dos n�meros y 
que permita seleccionar la operaci�n con 1 para sumar y 2 para restar. */

#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	int opcion;
	float a, b;
	cout<<"	     MENU";
	cout<<"\n1. Sumar";
	cout<<"\n2. Restar";
	cout<<"\nSeleccione el numero de la opcion: ";
	cin>>opcion;
	
	switch(opcion)
	{
		case 1: system("cls");
		cout<<"Ingrese dos valores: ";
		cin>>a>>b;
		cout<<"\nEl resultado de la suma es: "<<a+b;
		break;
		
		case 2: system("cls");
		cout<<"Ingrese dos valores: ";
		cin>>a>>b;
		cout<<"\nEl resultado de la resta es: "<<a-b;
		break;
	}
	return 0;
}
