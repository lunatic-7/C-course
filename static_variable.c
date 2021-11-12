#include <stdio.h>

int b = 34;  //  Global varibale.

int func1(int b1)
{
    static int myvar = 98;
    printf("The value of myvar is %d\n", myvar);
    myvar++;

    return b1 + myvar;
}

int main()
{
    int b = 344;
    int val;
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    printf("The value returned from func1 is %d\n", func1(b));
    return 0;
}