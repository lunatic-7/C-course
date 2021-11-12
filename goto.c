#include <stdio.h>

int main()
{
    int num, i, j;

    for (i = 0; i < 7; i++)
    {
        printf("Hey let's see the power of goto, but it is generally avoided.\n");

        for ( j = 0; j < 7; j++)
        {
            printf("Enter a number, and Enter 0 to exit the program.\n");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;  // If we have used break instead it would just have get us out of this for 
            }  // not from all, but goto can do this.
        }
    }

    end:

    return 0;
}
