#include <iostream>
int main()
{
    int i;
    int suma = 0;
    for (i = 1; i <= 10; i++)
    {
        suma += i;
        std ::cout << i << std ::endl;
    }
    std ::cout << suma << std ::endl;
    return 0;
}