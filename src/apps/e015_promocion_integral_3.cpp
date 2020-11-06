#include <iostream>
using namespace std;
int main()
{
    int op1 = -5;
    unsigned int op2 = 2;
    cout << " Operador 1: " << op1 << endl;
    cout << " Operador 2: " << op2 << endl;
    cout << " Operador 1: " << sizeof(op1) << " bytes " << endl;
    cout << " Operador 2: " << sizeof(op2) << " bytes " << endl;
    cout << " Operador 1: " << (unsigned int)(op1) << endl;
    cout << (op1 + op2) << endl;
    return 0;
}