#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2;
    cout << " Escriba un numero entero : ";
    cin >> numero1;
    cout << " Escriba otro numero entero : ";
    cin >> numero2;
    if (numero1 == numero2)
    {
        cout << " Los numeros son iguales ." << endl;
    }
    else
    {
        cout << " Los numeros son diferentes . " << endl;
    }
    (numero1 == numero2) ? cout << " Los numeros son iguales ." << endl : cout << " Los numeros son diferentes . " << endl;
    return 0;
}