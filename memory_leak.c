#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 77272)
    {
        printf("Welcome to code with harry!!! %d\n", i);
        i2 = malloc(34434 * sizeof(int));
        if (i % 1000 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak.
    }
    
    return 0;
}