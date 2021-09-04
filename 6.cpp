/*6.Un decreto presidencial permite el aumento del 10% a aquellos trabajadores que ganen el sueldo mínimo oficial.
 Hacer un código que lea el sueldo de un trabajador e imprima el sueldo a devengar, después del decreto */
 
#include <iostream>
#include <math.h>

using namespace std;

int main(){
   int sueldo, aumento, total;
   string nm;
	
	cout<<"Ingrese su nombre: "; cin>>nm;
	
	cout<<"\n\nHola"<<nm<<endl;
	
	cout<<"Por favor ingrese su sueldo: "; cin>>sueldo;
	
	if(sueldo>=980657)
	{
		aumento=sueldo/100*10; 
		
		total=sueldo+aumento; 
		
		cout<<"Ha sido beneficiario, ahora su sueldo es de: "<<total;
	}
	else
	{
		cout<<"No hacido beneficiario del programa.";
	}
	
	
	
	
	return 0;
}
