#include <stdio.h>

void changed(int *x, int *y)
{
    int t, k;
    t = *x;
    k = *y;
    *x = t + k;
    *y = t - k;

}

int main()
{
    int a = 4, b = 3;
    printf("The value of a and b is %d and %d respectively.\n", a, b);
    changed(&a, &b);
    printf("The value of a and b now is %d and %d respectively.\n", a, b);

    return 0;
}
