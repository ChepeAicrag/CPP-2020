#include <iostream>
using namespace std;
int main()
{
    char categoria;
    cout << " Escriba la categoria : ";
    cin >> categoria;
    switch (toupper(categoria))
    {
    case ( 'A'):
        cout << " Sueldo : $10 ,000.\n ";
        break;
    case ( 'B'):
        cout << " Sueldo : $15 ,000.\n ";
        break;
    case ( 'C'):
        cout << " Sueldo : $20 ,000.\n ";
        break;
    case ( 'D'):
        cout << " Sueldo : $25 ,000.\n ";
        break;
    default:
        cout << " Categoria no valida .\n ";
    }
    return 0;
}