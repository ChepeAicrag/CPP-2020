#include <iostream>
using namespace std;
double cube(double);
int main(){
    double numero;
    cin >> numero;
    cout << cube(numero) << endl;
    return 0;
}

double cube(double num){
    return num * num * num;
}