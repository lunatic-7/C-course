#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Type a: ");
    scanf("%d", &a);

    printf("Type b: ");
    scanf("%d", &b);

    printf("Type c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a:%d is Greatest.", a);
        }
        else if (c > a)
        {
            printf("c:%d is Greatest.", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("b:%d is Greatest.", b);
        }
        else if (c > b)
        {
            printf("c:%d is Greatest.", c);
        }
    }

    return 0;
}