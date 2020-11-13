#include <iostream>
using namespace std;

int main(){
        // Segunda parte

    // Case 1:
    bool op1 = true;
    bool op2 = false;
    bool resultado1_and = op1 && op2;
    bool resultado1_or = op1 || op2;
    bool resultado1_not = !op1;
    cout << op1 << " AND " << op2 << " = " << resultado1_and << endl;
    cout << op1 << " OR " << op2 << " = " << resultado1_or << endl;
    cout << " NOT " << op1 << " = " << resultado1_not << endl;

    // Case 2:
    bool resultado2_and = true & false;
    bool resultado2_or = true | false;
    bool resultado2_not = !true;
    cout << resultado2_and << endl;
    cout << resultado2_or << endl;
    cout << resultado2_not << endl;
    
    // Case 3:
    cout << (true & false) << endl;
    cout << (true | false) << endl;
    cout << (!true) << endl;
}