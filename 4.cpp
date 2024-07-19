/*4. Hacer un código que lea los nombres y edades de dos personas 
y muestre cuál de ellas tiene más edad.*/

#include<iostream>

using namespace std;

int main(){
	int a,b;
	string nom1,nom2; 
	
	cout<<"\nIngrese el nombre de la primera persona: ";
	cin>>nom1;
	cout<<"\nIngrese su edad: "; 
	cin>>a;
	
	cout<<"\nIngrese el nombre de la segunda persona: "; 
	cin>>nom2;
	cout<<"\nIngrese su edad: "; 
	cin>>b;
	
	if(a>b){
		cout<<"\n"<<nom1<<" es mayor que "<<nom2;
	}else{
		cout<<"\n"<<nom2<<" es mayor que "<<nom1;
	}
	return 0;
}
