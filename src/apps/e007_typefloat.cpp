#include <iostream>
#include <limits> // std :: n u m e r i c _ l i m i t s
#include <math.h>

int main () {
    // Size of float datatype
    std :: cout << " float :\t \t " << sizeof ( float ) << " bytes " << std :: endl ;
    // Max and min value of float datatype
    std :: cout << " Minimum value for float : " << std :: numeric_limits < float >:: min () << "\n ";
    std :: cout << " Maximum value for float : " << std :: numeric_limits < float >:: max () << "\n ";
    float data = 64;
    std :: cout << data << std :: endl ;
    // Machine epsilon ( the d i f f e r e n c e between 1 and the least value greater
    // than 1 that is r e p r e s e n t a b l e ).
    std :: cout << " Machine epsilon : " << std :: numeric_limits < float >:: epsilon () << "\n ";
    return 0;
}