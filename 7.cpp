/*1. Un hombre desea saber cuanto dinero se genera por concepto
de intereses sobre la cantidad que tiene en inversión en el banco.
 El decidirá reinvertir los intereses siempre y cuando estos excedan a $7000, y
 en ese caso desea saber cuanto dinero tendrá finalmente en su cuenta.*/

#include <iostream>

using namespace std;

int main()
{
    int cap, t1;
    float capf, inte;

    cout << "Bienvenido" << endl;

    cout << "\nCual es el capital que desea invertir: " << endl;
    cin >> cap;

    cout << "Tasa de interes" << endl;
    cin >> t1;

    inte = (cap * t1) / 100;

    if (inte > 7000)
    {

        capf = cap + inte;
    }
    else
    {
        cout << "Su capital es: " << capf << endl;
    }
}
