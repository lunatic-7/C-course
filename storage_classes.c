#include <stdio.h>
#include "temp.c"

int num;  // By default it's value will be 0.
int myfunc(int a, int b)
{
    // int num;
    num = a + b;
    return num;
}

int main()
{
    int num = myfunc(3, 4);  // If we comment this, printf will execute external (global scope variable).
    printf("The value of sum is: %d\n", num);  // First it will search for num in main()
    // then myfunc() and then  external (global scope variable).
    // Declaration - Telling the compiler abt. the variable (No space reserved.)
    // Definition - Declaration + Space reservation.

    printf("The value of number imported from temp.c is : %d\n", number);
    return 0;
}