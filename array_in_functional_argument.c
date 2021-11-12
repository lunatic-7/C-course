#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of arr is %d\n", i, array[i]);
    }
    array[0] = 373; // If we change here, the main() value will also change, as array gets stored in 
}   // a function as pointer.

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value of %d element of arr is %d\n", i, ptr[i]); // they both are same.
        printf("The value of %d element of arr is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 77; // this will get applied when we call the function 2nd time.
}



int main()
{
    int arr[] = {12, 23, 28 ,7};
    printf("The value at index 0 is %d\n\n", arr[0]);
    func1(arr);
    printf("The value at index 0 is %d\n\n", arr[0]);
    func2(arr);
    printf("\n");
    func2(arr);

    return 0;
}
