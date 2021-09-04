/*9.	Realizar un código que solicite el nombre de un alumno y cinco calificaciones; con estos datos calcular el promedio 
del alumno (teniendo en cuenta que las notas son de 1 a 5). Mostrar si el alumno está aprobado considerando que el promedio
 aprobatorio es mayor o igual a 3.0.*/
  
#include<iostream>

using namespace std;

int main()
{
	string nom;
	float v,w,x,y,z, promedio;
	
	cout<<"Ingrese su nombre: "; cin>>nom;
	cout<<"\nBienvenid@ "<<nom<<endl;
	cout<<"\nDigite su primera nota: "; cin>>v;
	cout<<"\nDigite su segunda nota: "; cin>>w;
	cout<<"\nDigite su tercera nota: "; cin>>x;
	cout<<"\nDigite su cuarta nota: "; cin>>y;
	cout<<"\nDigite su quinta nota: "; cin>>z;
	
	promedio = ((v+w+x+y+z)/5);
	
	if(promedio>=3.0){
		cout<<"\n"<<nom<<" has aprobado con la nota: "<<promedio;
	}else
	{
		cout<<"\n"<<nom<<" has reprobado con la nota: "<<promedio;
	}
	return 0;
}
