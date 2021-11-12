// This is a Pre-processor command.

// This is the first line of our code. Any line starting with # represents a preprocessing command. 
// It tells our program that before its execution, it must include the stdio.h named file in it because 
// we are using some of the commands or codes from this file.

// For example, if our programs needs mathematical operations of high level them we must include:
// #include <math.h>
// It helps us to use the code from math.h file for the calculations in our programs.
#include <stdio.h>

// Here int is the return type of function and the return type is according to the functions activity
// i.e. if it is giving an integer variable as a result then return type should be int.
int main()
{
    
    // Here we are initializing two variables as integers. Initializing with integer means 
    // that we can store integer values in it. If we would have initialized them with char 
    // then we could have stored character values in it such as a, b, c, d, etc.  
    int a, b;
    
    // This is simply a print statement. Whatever we write in the brackets will be directly
    // printed onto the screen. /n is the new line character here.
    printf("Enter number a\n");
    
    // scanf is used to take inputs from the user. Here &a gives the address of variable “a”
    // to store the user's given value. %d notifies that the value should be of integer type.
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    // Here a+b is simply a mathematical addition and  print statement is printing the result onto the screen.
    printf("The sum is %d\n", a + b);

    // We need a return value for a function. The function we created was of int type so it is returning 0.
    // Return 0 means that the function is working perfectly.

    // Note: Return statement and function type should be same.
    return 0;
}
