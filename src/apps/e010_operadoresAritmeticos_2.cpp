#include <iostream>
using namespace std;

int main(){
    int a = 4;
    cout << a << endl;
    a = a + 1;
    cout << a << endl;
    a++;
    cout << a << endl;
    a += 1;
    cout << a << endl;
    a += 10;
    cout << a << endl;
    int b = 5;
    //( ( ( ( b +=3 ) ++ )/ 3 ) *= 2);
    cout << (--b) << endl;
    return 0;
}