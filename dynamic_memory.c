#include <stdio.h>
#include <stdlib.h> // Used to get functions of dynamic memory allocation.

int main()
{
    // Use of malloc

    int *ptr;
    int n;

    printf("Enter the size of Array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this Array: \n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value no. %d of this Array is: %d\n", i, ptr[i]);
    }

    printf("\n");

    // Use of calloc

    int *ptr2;
    int m;

    printf("Enter the size of Array you want to create: ");
    scanf("%d", &m);

    ptr2 = (int *)calloc(m, sizeof(int));

    for (int i = 0; i < m; i++)
    {
        printf("Enter the value no %d of this Array: \n", i);
        scanf("%d", &ptr2[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("The value no. %d of this Array is: %d\n", i, ptr2[i]);
    }
    
    printf("\n");

    // Use of realloc

    // Here, we will reallocate the values of calloc.

    printf("Enter the size of new Array you want to create: ");
    scanf("%d", &m);

    ptr2 = (int *)realloc(ptr2, m*sizeof(int));

    for (int i = 0; i < m; i++)
    {
        printf("Enter the value no %d of this Array: \n", i);
        scanf("%d", &ptr2[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("The value no. %d of this Array is: %d\n", i, ptr2[i]);
    }

    free(ptr2);  // to free up the memory of realloc.
    return 0;
}