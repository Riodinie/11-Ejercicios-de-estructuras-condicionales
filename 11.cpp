/*11.	Realizar un c�digo que imprima las siguientes opciones "1.- suma 2.- resta 3.- multiplicaci�n 4.- divisi�n". 
Posteriormente debe solicitar dos n�meros, as� mismo debe solicitar el n�mero de la operaci�n a realizar sobre los
n�meros solicitados previamente. Es decir, si la opci�n seleccionada es 1 debe realizar la suma de los n�meros e 
 imprimir el resultado. Si la opci�n seleccionada es 2 debe realizar la resta de los n�meros e imprimir el resultado. 
 Si la opci�n seleccionada es 3 debe realizar la multiplicaci�n de los n�meros e imprimir el resultado. Si la opci�n 
 seleccionada es 4 debe realizar la divisi�n de los n�meros e imprimir el resultado. La entrega de la actividad ser� impresa. 
 Considerar la ortograf�a y limpieza. */

#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	int op;
	float a, b;
	cout<<"	     MENU";
	cout<<"\n1. Sumar";
	cout<<"\n2. Restar";
	cout<<"\n3. Multiplicacion";
	cout<<"\n4. Division";
	cout<<"\n5. Salir";
	cout<<"\nSeleccione el numero de la opcion: ";
	cin>>op;
	
	if(op>5){
	system("cls");	
	cout<<"La opcion que ingreso no existe."<<endl;
	}
	
	switch(op)
	{
		case 1: 
		system("cls");
		cout<<"Ingrese dos valores: ";
		cin>>a>>b;
		cout<<"\nEl resultado de la suma es: "<<a+b;
		break;
		
		case 2:
	    system("cls");
		cout<<"Ingrese dos valores: ";
		cin>>a>>b;
		cout<<"\nEl resultado de la resta es: "<<a-b;
		break;
		
		case 3:
		system("cls");
		cout<<"Ingrese dos valores: ";
		cin>>a>>b;
		cout<<"\nEl resultado de la Multiplicacion es: "<<a*b;
		break;
		
		case 4: 
		system("cls");
		cout<<"Ingrese dos valores: ";
		cin>>a>>b;
		cout<<"\nEl resultado de la division es: "<<a/b;
		break;
		
		case 5: 
		system("cls");
		cout<<"Gracias por utilizar nuestro programa";
		break;
	}
	
	return 0;
}

