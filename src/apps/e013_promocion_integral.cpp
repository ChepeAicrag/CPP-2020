#include <iostream>
using namespace std;
int main()
{
    char ch = 100;
    int i = 10;
    float f = 24.5;
    double d = 50.789;
    cout << " result : " << ((ch / i) + (f * d) - (f + i)) << endl;
    cout << " no bytes : " << sizeof((ch / i) + (f * d) - (f + i)) << endl;
    return 0;
}