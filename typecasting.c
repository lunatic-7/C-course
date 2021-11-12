#include <stdio.h>

int main()
{
    int a = 3;
    float b = 5;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);  // Will give 0 as be is float and we are using %d, But to resolve
    // this we can use typecasting
    printf("This is the value of b: %d", (int) b);
    return 0;
}

