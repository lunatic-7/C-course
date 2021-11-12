#include <stdio.h>

int main()
{
    int a = 7;
    int *ptra = &a;
    int arr[] = {12,34,2,47,29,77};


    // +1 or ++ adds and -1 or -- subtracts the 1 space taken by int, which is 4 bytes in my arcitechture. 
    printf("%d\n", ptra);
    printf("%d\n", ptra+1);
    ptra++;
    printf("%d\n", ptra);
    printf("%d\n", ptra-1);
    ptra--;
    printf("%d\n", ptra);
    printf("%d\n", ptra-2);

    printf("The value of 3rd element of arr is %d\n", arr[2]);
    printf("The address of 1st element of arr is %d\n", &arr[0]);
    printf("The address of 1st element of arr is %d\n", arr);
    printf("The address of 2nd element of arr is %d\n", &arr[1]);
    printf("The address of 2nd element of arr is %d\n", arr + 1);
    // arr--;  This will give an error bc it's a constant not a pointer element.

    printf("The value of 1st element of arr is %d\n", arr[0]);
    printf("The value of 1st element of arr is %d\n", *(&arr[0]));
    printf("The value of 1st element of arr is %d\n", *(arr));
    printf("The value of 2nd element of arr is %d\n", arr[1]);
    printf("The value of 2nd element of arr is %d\n", *(&arr[1]));
    printf("The value of 2nd element of arr is %d\n", *(arr + 1));

    return 0;
}
