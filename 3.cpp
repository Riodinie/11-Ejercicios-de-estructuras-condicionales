/* 3. Una persona enferma, que pesa 70 kg, se encuentra en reposo y desea saber cuántas calorías consume su cuerpo durante todo el tiempo 
que realice una misma actividad. Las actividades que tiene permitido realizar son únicamente dormir o estar sentado en reposo. 
Los datos que tiene son que estando dormido consume 1.08 calorías por minuto y estando sentado en reposo consume 1.66 calorías por minuto.*/

#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	int op;
	float respuesta,time;
	
	respuesta = 0;
	
	cout<<"\t\t|||BIENVENID@|||\n"<<endl;
	
	cout<<"\tMENU CONSUMO DE CALORIAS";
	cout<<"\n\n1. Durmiendo.";
	cout<<"\n\n2. Sentado en reposo.";
	cout<<"\n\n3. Salir.";
	cout<<"\n\nElija una opcion: ";
	cin>>op;
	
	if(op>3){
	system("cls");
	cout<<"\nLa opcion que ingreso no existe."<<endl;
	}
	
	switch (op){
		case 1: 
		system("cls");
		cout<<"Ingrese el tiempo que realizo la actividad (en minutos): ";
		cin>>time;
		respuesta = time * 1.08;
		cout<<"\nTu cuerpo ha consumido "<<respuesta<<" calorias";
		cout<<" durante estos "<<time<<" minutos.";
		break;
		
		case 2:
		system("cls");
		cout<<"Ingrese el tiempo que realizo la actividad (en minutos): ";
		cin>>time;
		respuesta = time * 1.66;
		cout<<"\nTu cuerpo ha consumido "<<respuesta<<" calorias";
		cout<<" durante estos "<<time<<" minutos.";
		break;
		
		case 3: system("cls");
		cout<<"Que tenga un buen dia."<<endl;
		break;
	}
	
	return 0;
	
}
