#include <stdio.h>

int main()
{
    int a = 7;
    int *ptr = NULL;
    // int *ptr = &a;
    // int *ptr;  // We can't leave pointer variable undefined, bc if we run it, it may crash the program

    printf("%d\n", ptr); // This will give 0.

    if (ptr != NULL)
    {
        printf("The address of a is: %d\n", ptr);
    }
    else
    {
        printf("ptr is a NULL pointer and can't be dereferenced.");
    }

    return 0;
}