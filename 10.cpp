/*10.	Realizar un código que solicite el nombre de un alumno y cinco calificaciones; con estos datos calcular el
promedio del alumno. Si el promedio se ubica en el rango de 9.5-10.0 imprimir "excelente", en caso contrario si el promedio
se ubica en el rango de 8.5-9.4 imprimir "muy bien", en caso contrario si el promedio se ubica en el
rango de 7.5-8.4 imprimir "bien", en caso contrario si el promedio se ubica en el rango de 7.0-7.4 imprimir "regular".
Entrega impresa. Considerar ortografía y limpieza. */

#include <iostream>

using namespace std;

int main()
{
	string nom;
	float a, b, c, d, e, promedio;

	cout << "Ingresa tu nombre: ";
	cin >> nom;
	cout << "\nHola " << nom << " Ingresa tus notas: " << endl;
	cout << "\nPrimera:";
	cin >> a;
	cout << "\nSegunda:";
	cin >> b;
	cout << "\nTercera:";
	cin >> c;
	cout << "\nCuarta:";
	cin >> d;
	cout << "\nQuinta:";
	cin >> e;
	promedio = ((a + b + c + d + e) / 5);

	if (promedio >= 9.5 && promedio <= 10.0)
	{
		cout << "\nExcelente!!.";
	}
	if (promedio >= 8.5 && promedio <= 9.4)
	{
		cout << "\nMuy bien.";
	}
	if (promedio >= 7.5 && promedio <= 8.4)
	{
		cout << "\nBien.";
	}
	if (promedio >= 7.0 && promedio <= 7.4)
	{
		cout << "\nRegular.";
	}
	if (promedio < 6.9)
	{
		cout << "\nTu nota es inferior a los rangos asignados.";
	}
	return 0;
}
