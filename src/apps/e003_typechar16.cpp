#include <iostream>
#include <limits> // n u m e r i c _ l i m i t s
using namespace std;

int main () {
// Size of char16_t datatype
cout << " char16_t :\ t \ t " << sizeof ( char16_t ) << " bytes " << endl ;
// Max and min of char16_ t datatype
cout << " Minimum value for char16_t : " << numeric_limits < char16_t >:: min () << "\n ";
cout << " Maximum value for char16_t : " << numeric_limits < char16_t >:: max () << "\n " ;
cout << " Minimum value for char16_t : " <<( int ) numeric_limits < char16_t >:: min () << "\n ";
cout << " Maximum value for char16_t : " <<( int ) numeric_limits < char16_t >:: max () << "\n ";

// Test : 64 , ’@ ’, warning m u l t i c h a r : ’ ab ’ , warning overflow : 65536
char16_t data = 64;
cout << data << endl ;
return 0;
}