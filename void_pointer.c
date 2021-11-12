#include <stdio.h>

int main()
{
    int a = 7;
    float b = 7.706;
    
    void *ptr;
    ptr = &a;
    // printf("The value of a is: %d\n", *ptr);  // derefrence void pointer in not possible
    printf("The value of a is: %d\n", *(int *)ptr);  // Here, we typecasted void to int, so it will run.

    ptr = &b;
    printf("The value of b is: %f\n", *(float *)ptr);  // Here, we typecasted void to float, so it will run.
    return 0;
}

// So, as we see we can use void pointer and store anything as per out requirement, That's why 
// It is also called General purpose pointer variable.