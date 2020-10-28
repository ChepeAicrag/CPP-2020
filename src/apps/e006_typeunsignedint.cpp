#include <iostream>
#include <limits> // std :: n u m e r i c _ l i m i t s
#include <math.h>
int main () {
    // Size of char datatype
    std :: cout << " unsigned int :\t \t " << sizeof ( unsigned int ) << " bytes " << std :: endl ;
    // Max and min value of unsigne d int datatype
    std :: cout << " Minimum value for unsigned int : " << std :: numeric_limits < unsigned int >:: min () << "\n ";
    std :: cout << " Maximum value for unsigned int : " << std :: numeric_limits < unsigned int >:: max () << "\n ";
    // 32 1 ’ s
    std :: cout << " Maximum value for int : " <<( unsigned int )( pow (2 ,8* sizeof ( unsigned int )) -1) << "\n ";

    unsigned int data = 64;
    std :: cout << data << std :: endl ;
    return 0;
}