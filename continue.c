#include <stdio.h>

int main()
{
    int i, age;

    for (i = 0; i < 10; i++)  // can take 10 inputs
    {
        printf("Enter you age: \n");
        scanf("%d", &age);
        
        if (age > 10)  // Break out of loop, if user enter a age greter than 10. 
        {
            continue;
        }

        printf("Move away! It's not for you");  // will be skipped if age is > 10
    }
    return 0;
}
