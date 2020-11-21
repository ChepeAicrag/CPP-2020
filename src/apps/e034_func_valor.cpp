#include <iostream>
using namespace std;
void cube(double &num){
    num =  num * num * num;
}

int main(){
    double numero;
    cin >> numero;
    cube(numero);
    cout << numero << endl;
    return 0;
}