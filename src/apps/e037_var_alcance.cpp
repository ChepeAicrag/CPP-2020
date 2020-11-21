#include <iostream>
using namespace std;
void f();
void g();
int x = 11;
int main(){
    int x = 22;
    {
        int x = 33;
        cout << " In block inside main () x = "
                     << x <<
            endl;
        cout << " In block inside main () global x = " << ::x << endl;
    }
    cout << " In main () local x = " << x << endl;
    cout << " In main () global x = " << ::x << endl;
    f();
    g();
    return 0;
}
void f(){
    int x = 44;
    cout << " In f () local x = " << x << endl;
    cout << " In f () global x = " << ::x << endl;
}
void g(){
    cout << " In g () global x = " << x << endl;
}