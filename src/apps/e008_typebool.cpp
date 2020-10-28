#include <iostream>
#include <limits> // std :: n u m e r i c _ l i m i t s
// # include < cmath >
int main () {

    // Size of char datatype
    std :: cout << " bool :\t \t " << sizeof ( bool ) << " bytes " << std :: endl ;

    // Max and min value of bool datatype
    std :: cout << " Minimum value for bool : " << std :: numeric_limits < bool >:: min () << "\n ";
    std :: cout << " Maximum value for bool : " << std :: numeric_limits < bool >:: max () << "\n ";

    bool data = true ;
    std :: cout << data << std :: endl ;
    data = false ;
    std :: cout << data << std :: endl ;
    return 0;
}