/* Fibonnaci series of 43,
in both iterative and recursive method */

#include <stdio.h>

// Recursive

int fib_recursive(int number)
{
    if (number == 1 || number == 2)
    {
        return number - 1;
    }
    else
    {
        return fib_recursive(number - 1) + fib_recursive(number - 2);
    }
    
}
// Iterative
int fib_iterative(int number2)
{
    int a = 0;
    int b = 1;
    
    for (int i = 0; i < number2 - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    
    return a;
}

int main()
{
    int num;
    printf("Type a number you want the fibonacci series of: ");
    scanf("%d", &num);
    printf("The value of fibonacci number at position {%d}, is %d using iterative approach.\n", num, fib_iterative(num));
    printf("The value of fibonacci number at position {%d}, is %d using recursive approach.\n", num, fib_recursive(num));
    return 0;
}

// Here, we can see iterative approach is faster than recursive approach.