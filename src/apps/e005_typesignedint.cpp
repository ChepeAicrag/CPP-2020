#include <iostream>
#include <limits> // std :: n u m e r i c _ l i m i t s
#include <math.h>

int main () {
    // Size of char datatype
    std :: cout << " signed int :\t \t " << sizeof ( signed int ) << " bytes " << std :: endl ;
    // Max and min value of signed int datatype
    std :: cout << " Minimum value for signed int : " << std :: numeric_limits < signed int >:: min () << "\n ";
    std :: cout << " Maximum value for signed int : " << std :: numeric_limits < signed int >:: max () << "\n ";
    // 32 1 ’ s
    std :: cout << " Minimum value for signed int : " <<( signed int )( pow (2 ,8* sizeof ( signed int )) -1) << "\n ";
    // 0 , 31 1 ’ s
    std :: cout << " Maximum value for signed int : " << ( signed int )( pow (2 ,8* sizeof ( signed int ) -1) -1) << "\n ";

    signed int data = 64;
    std :: cout << data << std :: endl ;
    return 0;
}