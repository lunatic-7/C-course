#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 7;
    int *ptr;  // Wild pointer.
    // *ptr = 34;  // This isn't a good thing to do, it is pointing an arbitrary memory location to integer 34.
    // Which may cause our program to act weirdy or crash the program.
    ptr = &a;
    printf("The value of a is: %d\n", *ptr);
    return 0;
}