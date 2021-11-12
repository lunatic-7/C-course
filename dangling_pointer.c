#include <stdio.h>
#include <stdlib.h>

int b = 37;

// Part of Case 2
int *myFunc()
{
    // a is local variable & goes out of scope on function return over.
    // int b = 34;
    return &b;
}

int main2()
{
    // Case 1 => De allocation of memory block.

    int *ptr = (int *) malloc(7 * sizeof(int));
    ptr[0] = 7;
    ptr[2] = 17;
    ptr[3] = 72;
    ptr[4] = 777;
    free(ptr);  // ptr is now a dangling pointer.

    // Case 2 => Function returning local variable address.
    int *ptr2 = myFunc();  // ptr2 points to invalid location. (Dangling pointer)
    printf("%d", *ptr2);
    return 0;

    // Case 3 => If a variable goes out of scope.
    int *ptr3;
    {
        int a = 123;
        ptr3 = &a;
    }
    // Here, variable a goes out of scope which means ptr3 is pointing to a location which is freed,
    // and hence, ptr3 is a dangling pointer.

}