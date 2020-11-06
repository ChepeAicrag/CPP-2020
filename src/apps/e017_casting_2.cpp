#include <iostream>

int main()
{
    int op1 = -5;
    unsigned int op2 = 2;
    std ::cout << " Operador 1: " << op1 << std ::endl;
    std ::cout << " Operador 2: " << op2 << std ::endl;
    std ::cout << " Operador 1: " << sizeof(op1) << " bytes " << std ::endl;
    std ::cout << " Operador 2: " << sizeof(op2) << " bytes " << std ::endl;
    std ::cout << " Operador 1: " << (long int)(op1) << std ::endl;
    std ::cout << (long int)(op1) + (long int)(op2) << std ::endl;
    std ::cout << sizeof((long int)(op1) + (long int)(op2)) << std ::endl;
    return 0;
}