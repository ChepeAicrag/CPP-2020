#include <iostream>
using namespace std ;
int main (){

    // Case 1:
    int op1 = 1;
    int op2 = 10;
    int resultado1 = op1 + op2 ;
    cout << resultado1 << endl ;

    // Case 2:
    int resultado2 = 1 + 10;
    cout << resultado2 << endl ;

    // Case 3
    cout << 1+10 << endl ;

    // Posincremento / posdecremento
    int a = 0;
    cout << a-- <<endl;
    cout << a <<endl;
    
    // Preincremento / predecremento
    a = 0;
    cout << --a <<endl;
    cout << a <<endl;
    
    return 0;
}    