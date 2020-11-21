#include <iostream>
using namespace std;
int x = 1;
int xs = 2;
void f();
int main(){
    cout << " In main () global x = "
                 << x <<
        endl;
    cout << " In main () static xs = "
                 << xs <<
        endl;
    f();
    return 0;
}