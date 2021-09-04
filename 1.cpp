/*1.	Elabore un código que solicite un número, en base a este dato imprimir si el número es positivo. */

#include<iostream>

using namespace std;

int main(){
float numero; 

cout<<"Digite un numero: "; cin>>numero;

if(numero>0){
	
cout<<"\nEl numero que digito es positivo.";

}else{
	
cout<<"\nEl numero que digito es negativo.";
 }

return 0;
  }
