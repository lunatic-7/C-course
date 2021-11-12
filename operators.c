
#include <stdio.h>

int main()
{
    int a, b;
    a = 2;
    b = 3;

// Arithmatic operators

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

// Bitwise operators ---> They creates numbers in binary first.

    printf("a & b = %d\n", a & b);   
    
    // Process of calc.
    // 1 0 ---> 2
//  &  1 1 ---> 3
//  =  1 0 ---> 2
    return 0;
}

// Binary 0 to 10
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
// 6 --> 110
// 7 --> 111
// 8 --> 1000
// 9 --> 1001
// 10 --> 1010
