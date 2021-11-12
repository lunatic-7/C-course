#include <stdio.h>

// Maths & Science = 45 prize
// Maths = 15 prize
// Science = 15 prize

int main()
{
    // char exam[10];  // 10 is no. of characters this string can take.
    int exam;

    printf("Which Exams have you passed between Maths & Science? (Type 1 for Maths, 2 for Science and 3 for Both): \n");
    scanf("%d", &exam);
    printf("You have entered %d as your passed exams!\n", exam);
    
    if (exam == 1)
    {
        printf("Congratulatins! You have won $15 as a Prize...");
    }
    else if (exam == 2)
    {
        printf("Congratulatins! You have won $15 as a Prize...");
    }
    else if (exam == 3)
    {
        printf("Congratulations! You have won $45 as a Prize...");
    }
    else
    {
        printf("Please, type a valid number!");
    }
    
    return 0;
}
