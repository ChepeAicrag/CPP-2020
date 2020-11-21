#include <iostream>
using namespace std;
int factorial(int n){
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}

int permutation(int n, int k){
    return (factorial(n) / (factorial(n - k)));
}

int main(){
    int n, k;
    cin >> n;
    cin >> k;
    cout << " pemutation ( " << n << " , " << k << " )= " << permutation(n, k) << endl;
    return 0;
}