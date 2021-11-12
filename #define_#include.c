#include <stdio.h>
#include "dangling_pointer.c"
#define PI 3.14 // It will replace all PI's with 3.14
#define SQUARE(r) r*r  // It will replace all r with r*r


int main()
{
    float var = PI;
    int r = 4;
    int *ptr = myFunc();  // importing this function from dangling_pointer.c

    printf("The value of PI is: %f\n", var);
    printf("The are of square is: %f\n", PI * SQUARE(r));
    return 0;
}