/*2. Que lea dos números y los muestre en forma ascendente */

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "Digite el primer número: ";
	cin >> a;
	cout << "Digite el segundo número: ";
	cin >> b;

	if (a < b)
	{
		cout << a << "\n"
			 << b;
	}
	else
	{
		cout << b << "\n"
			 << a;
	}
	return 0;
}
