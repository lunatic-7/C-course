#include <stdio.h>

int main()
{
    printf("Let's learn abt. pointers...\n");
    
    int a = 7;
    int *ptra = &a;  // Here, we stored the address of a in pointer ptra.
    int *ptr2 = NULL;
    
    printf("The value of a is: %d\n", a);
    printf("The value of a is: %d\n", *ptra);  // This will give the value of a.
    printf("The address of a is: %p\n", &a);  // %p and %x is used for address.
    printf("The address of a is: %p\n", ptra);  // Gives the address of a.
    printf("The address of ptra is: %p\n", &ptra);  // Gives the address of ptra.
    printf("The address of ptr2 is: %p\n", ptr2);  // Will give 0000000 in output, means it has null value.

    return 0;
}