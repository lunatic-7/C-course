#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greetUser(int (*fPtr) (int, int))
{
    printf("Hello user!\n");
    printf("The sum of 5 and 7 is: %d\n", fPtr(5,7));
}

void gmUser(int (*fPtr) (int, int))
{
    printf("Good morning user!\n");
    printf("The sum of 5 and 7 is: %d\n", fPtr(5,7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetUser(ptr);
    gmUser(ptr);
    return 0;
}