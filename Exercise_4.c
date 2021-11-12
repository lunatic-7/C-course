/* Take input from user and ask user to choose 0 for traingular star pattern and 1 for reverse traingular star
pattern. Then print the pattern accordingly.

*
**
***
**** ---> Triangular star pattern. // eg. If user enter 4 then till 4 stars.

****
***
**
* ---> Reverse triangular star pattern

*/

#include <stdio.h>

int starPattern(int rows, int style)
{
    if (style == 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    else if (style == 1)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < rows-i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter NUMBERS between 0 and 1 only!");
    }
    
}   

int main()
{
    int rows, style;
    printf("How many rows do you want: " );
    scanf("%d", &rows);
    printf("Type 0 for triangular star pattern and 1 for reverse triangular star pattern: \n");
    scanf("%d", &style);
    printf("\n");
    starPattern(rows, style);    

    return 0;
}
