#include <iostream>
int main()
{
    int var_int;
    std ::cout << " Please enter an integer value : ";
    std ::cin >> var_int;
    std ::cout << " The value you entered is " << var_int << std ::endl;
    float var_float;
    std ::cout << " Please enter a float value : ";
    std ::cin >> var_float;
    std ::cout << " The value you entered is " << var_float << std ::endl;
    char var_char;
    std ::cout << " Please enter a char value : ";
    std ::cin >> var_char;
    std ::cout << " The value you entered is " << var_char << std ::endl;
    char var_char1, var_char2, var_char3;
    std ::cout << " Please enter 3 char values : ";
    std ::cin >> var_char1 >> var_char2 >> var_char3;
    std ::cout << " The value you entered is " << var_char1 << var_char2
               << var_char3 << std ::endl;
    return 0;
}