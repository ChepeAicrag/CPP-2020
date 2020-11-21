/*
#include <iostream>
using namespace std;
int factorial(int n){
    int factorial = n;
    while (n > 1)
        factorial = factorial * (--n);
    return factorial;
}

int main(){
    int number;
    cin >> number;
    cout << " factorial : "
                 << factorial(number) <<
        endl;
    return 0;
}

*/
#include <iostream>
using namespace std;
int factorial(int n){
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main(){
    int number;
    cin >> number;
    cout << " factorial : "
                 << factorial(number) <<
        endl;
    return 0;
}
