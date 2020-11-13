#include <iostream>
using namespace std;
int main()
{
    int categoria;
    cout << " Escriba la categoria : ";
    cin >> categoria;
    if (categoria == 1)
    {
        cout << " Sueldo : $10 ,000.\n ";
    }
    else if (categoria == 2)
    {
        cout << " Sueldo : $15 ,000.\n ";
    }
    else if (categoria == 3)
    {
        cout << " Sueldo : $20 ,000.\n ";
    }
    else if (categoria == 4)
    {
        cout << " Sueldo : $25 ,000.\n ";
    }
    else
    {
        cout << " Categoria no valida .\n ";
    }
    return 0;
}