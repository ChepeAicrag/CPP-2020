#include <iostream>
#include <limits> // n u m e r i c _ l i m i t s
#include <math.h>
using namespace std;

int main()
{
    // Size of char datatype
    cout << " int :\t \t " << sizeof(int) << " bytes " << endl;
    // Max and min value of int da tatype
    cout << " Minimum value for int : " << numeric_limits < int >:: min () << "\n ";
    cout << " Maximum value for int : " << numeric_limits < int >:: max () << "\n ";
    // 32 1 ’ s
    cout << " Minimum value for int : " <<( int )( pow (2 ,8* sizeof ( int )) -1) << "\n ";
    // 0 , 31 1 ’ s
    cout << " Maximum value for int : " <<( int )( pow (2 ,8* sizeof ( int ) -1) -1) << "\n ";
    int data = 64;
    cout << data << endl;
    return 0;
}