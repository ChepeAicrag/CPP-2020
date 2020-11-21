#include <iostream>
using namespace std;
void cube(double num, double &res){
    res = num * num * num;
}

int main(){
    double numero;
    double resultado = 0;
    cin >> numero;
    cube(numero, resultado);
    cout << resultado << endl;
    return 0;
}