#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your marks: \n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("Your are 3 years old!\n");
        switch (marks)  // Nested switch case.
        {
        case 47:
            printf("You got 47 marks at the age of 3! WOW...");
            break;
        
        default:
            printf("You failed, Sorry!");
        }
        break;
    case 13:
        printf("Your are 13 years old!");
        break;
    case 23:
        printf("Your are 23 years old!");
        break;
    
    default:
        printf("You are not of 3, 13 or 23 years old!");
    }
    return 0;
}
