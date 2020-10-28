#include <iostream>
#include <limits> // n u m e r i c _ l i m i t s
using namespace std;

int main()
{
    // Size of char datatype
    cout << " char :\t\t " << sizeof(char) << " bytes " << endl;
    cout << "Minimum value for char: " << numeric_limits <char> :: min() << "\n";
    cout << "Maximun value for char: " << numeric_limits <char> :: max() << "\n";
    cout << "Minimum value for char: " << (int) numeric_limits <char> :: min() << "\n";
    cout << "Maximum value for char: " << (int) numeric_limits <char> :: max() << "\n";
    
    // Test : ’ a ’, ’ abc ’, 64==( char )64
    char data = 64;
    cout << data << endl;
    int initial_value = (int) numeric_limits<char> :: min();
    int final_value = (int) numeric_limits<char> :: max();
    for (int i = initial_value; i <= final_value; i++)
    {
        data = i;
        cout << i << " -" << data << " \t ";
    }
    cout << endl;
    return 0;
}