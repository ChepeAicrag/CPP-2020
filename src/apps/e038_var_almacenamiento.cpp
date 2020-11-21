#include <iostream>
using namespace std;
void probarstat(){
    static int num = 0;
    cout << " El valor de la variable "
                 << " static num ahora es : "
                 << num <<
        endl;
    num++;
    return;
}
int main(){
    int cuenta;
    for (cuenta = 1; cuenta <= 3; cuenta++)
        probarstat();
    return 0;
}