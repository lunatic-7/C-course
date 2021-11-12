#include <stdio.h>

int sum(int a, int b);  // Declaration

// With argument and without return value.
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');  // Imp. * in single quotes only, bc it's a char and double quotes is used in strings.
        
    }
}

// Without argument and with return value.
int takenumber()
{
    int k;
    printf("Enter a number: ");
    scanf("%d", &k);
    return k;
}

// Without argument and without return value.
char greet()
{
    printf("Hello World!");
}

int main()
{
    int a, b, c, d;
    char g[12];
    a = 7;
    b = 3;

    c = sum(a, b);  // Call
    printf("This is our sum: %d\n", c);
    
    printstar(7);
    printf("\n");
    
    d = takenumber();
    printf("The entered number is: %d\n", d);

    g[12] = greet();
    printf(g);
    return 0;
}

// With argument and with return value.
int sum(int a, int b) {  // Definition
return a + b;
}

// As we have called the function before Definition, That's why we have to declare it in the beginning.