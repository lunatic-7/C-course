#include <stdio.h>

int main()
{
    // # 1D Array

    // int marks[4] = {45, 7, 9, 77}   // We can define values like this as well.
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of array. \n", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of array is: %d\n", i , marks[i]);
    }
    
    // # 2D Array

    int num[2][4] = {  // 2 means two rows, and 4 means four columns.
        {23,45,76,99},
        {43,88,92,100}
    };

    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("The value of %d, %d element is %d\n", j, k, num[j][k]);
        }
        
    }

    return 0;
}
