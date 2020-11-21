#include <iostream>
using namespace std;
void cube(double num, double &res){
    res = num * num * num;
}

void print(const double &res){
    cout << res << endl;
}

int main(){
    double numero;
    double resultado = 0;
    cin >> numero;
    cube(numero, resultado);
    print(resultado);
    return 0;
}