#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << " Escriba un numero entre 0 y 10: ";
    cin >> a;
    if ((a > 10) || (a < 0))
    {
        cout << " Entrada invalida .\n";
    }
    else
    {
        cout << " Entrada valida .\n";
    }
    ((a > 10) || (a < 0)) ? cout << " Entrada invalida .\ n" : cout << " Entrada valida .\ n";
    return 0;
}