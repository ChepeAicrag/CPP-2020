#include <iostream>
using namespace std;
int main()
{
    int categoria;
    cout << " Escriba la categoria : ";
    cin >> categoria;
    switch (categoria)
    {
    case (1):
        cout << " Sueldo : $10 ,000.\n ";
        break;
    case (2):
        cout << " Sueldo : $15 ,000.\n ";
        break;
    case (3):
        cout << " Sueldo : $20 ,000.\n ";
        break;
    case (4):
        cout << " Sueldo : $25 ,000.\n ";
        break;
    default:
        cout << " Categoria no valida .\n ";
    }
    return 0;
}