#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// You have to create a command line utility to add/subtract/divide/multiply two numbers
    // First command line argument of your c program must be the argv[0].
    // The next arguments being the two numbers. For example:
    // >>Exercise_13.c add 45 4
    // >>49

int addition(int num1, int num2)
{
    printf("The addition of your number is: %d\n", num1 + num2);
}

int subtraction(int num1, int num2)
{
    printf("The subtraction of your number is: %d\n", num1 - num2);
}

int multiplication(int num1, int num2)
{
    printf("The multiplication of your number is: %d\n", num1 * num2);
}

int division(int num1, int num2)
{
    printf("The division of your number is: %d\n", num1 / num2);
}


int main(int argc, char* argv[])
{
    // atoi function used to change string into an integer.

    char *operator;
    int num1, num2;

    operator = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Calculator ---> Made by Casanova...\n\n");

    if (strcmp(operator, "add")==0)
    {
        addition(num1, num2);
    }
    else if (strcmp(operator, "sub")==0)
    {
        subtraction(num1, num2);
    }
    else if (strcmp(operator, "mult")==0)
    {
        multiplication(num1, num2); 
    }
    else if (strcmp(operator, "div")==0)
    {
        division(num1, num2);
    }
    else
    {
        printf("Enter a valid entity!");
    }
     
    return 0;
}