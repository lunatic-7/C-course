#include <stdio.h>
#include <stdlib.h>

// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically
// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

int main()
{
    char *ptr;
    int size, i = 0;
    // char a, b;

    printf("Hey! We are ABC Pvt Ltd, we store emloyees record!\n\n");

    while (i < 3)
    {
        printf("Employee : %d Enter the size of Emloyee Id you are entering:\n", i+1);
        scanf("%d", &size);

        ptr = (char *)calloc(size, sizeof(char));

        // printf("Enter a: \n");
        // scanf("%c", &a);
        // getchar();

        // printf("Enter b: \n");
        // scanf("%c", &b);

        printf("Enter your emloyee Id:\n");
        scanf("%s", ptr);
        printf("Your Employee Id is: %s\n", ptr);
        free(ptr);
        i = i + 1;
    }


    return 0;
}