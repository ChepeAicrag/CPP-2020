#include <iostream>
using namespace std;
double max(double a, double b){
    double max;
    if (a > b)
        max = a;
    else
        max = b;
    return max;
}
int main(){
    double number1, number2;
    cin >> number1;
    cin >> number2;
    cout << " Max : " << max(number1, number2)
                       << endl;
    return 0;
}