#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    printf("The sum of 1 and 2 is: %d\n", sum(1,2));
    int (*fPtr) (int, int); // Declaring a function.
    fPtr = &sum;  // Creating a function pointer.

    int d = (*fPtr)(3,4);  // Derefrencing a function pointer.
    printf("The value of d is: %d\n", d);
    return 0;
}