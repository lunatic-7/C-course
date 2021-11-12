#include <stdio.h>
#define PI 3.14  // Just another way to define constants.

int main()
{
    int a = 4;
    const float b = 7.333;
    // b = 7.22;  // This gives an error bc we have made float b (a constant), This will be affected,
    // If we don't use the const keyword.

    printf("This is number a: %d and this is number b: %f\n", a, b);
    printf("%8.4f\n", b);  // %8.4f means 8 character k space mai 4 decimal places k saath b ko print kiya jaaye.
    printf("%-17.4f This is -ve space\n", b);
    // PI = 7.77;  // Invalid as PI is a constant.
    printf("%f", PI);
    return 0;
}
