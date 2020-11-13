#include <iostream>
using namespace std;

int main()
{
    cout << " char16_t :\t \t " << sizeof(char16_t) << " bytes " << endl;
    // 9( d ) = 00000000 0 0 0 0 1 0 0 1 ( b )
    char16_t op1 = 9;
    // 11( d ) = 00000000 0 0 0 0 1 0 1 1 ( b )
    char16_t op2 = 11;
    cout << " op1 : " << op1 << endl;
    cout << " op2 : " << op2 << endl;
    // 9( d ) = 00000000 0 0 0 0 1 0 0 1 ( b )
    cout << " AND : " << (op1 & op2) << endl;
    // 11( d ) = 00000000 0 0 0 0 1 0 1 1 ( b )
    cout << " OR : " << (op1 | op2) << endl;
    // 2( d ) = 00000000 0 0 0 0 0 0 1 0 ( b )
    cout << " XOR : " << (op1 ^ op2) << endl;
    // 65526( d ) = 11111111 1 1 1 1 0 1 1 0 ( b )
    cout << " NOT : " << ~op1 << endl;
    // C o r r i m i e n t o a la i z q u i e r d a
    // 18( d ) = 00000000 0 0 0 1 0 0 1 0 ( b )
    cout << " Left shift 1 bit : " << (op1 << 1) << endl;
    // 130( d ) = 00000000 0 1 0 0 1 0 0 0 ( b )
    cout << " Left shift 3 bit : " << (op1 << 3) << endl;
    // C o r r i m i e n t o a la derecha
    // 4( d ) = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 ( b )
    cout << " Right shift 1 bit : " << (op1 >> 1) << endl;
    // C o r r i m i e n t o a la derecha
    // 1( d ) = 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 ( b )
    cout << " Right shift 3 bit : " << (op1 >> 3) << endl;
    return 0;
}