#include <iostream>
using namespace std;
extern int x;
extern int xs;
void f(){
    cout << " In f () extern x = "
                 << x <<
        endl;
    cout <<" In f () extern xs ="
        << xs << endl;
    return;
}