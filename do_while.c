#include <stdio.h>

int main()
{           
    int num, index=0;
    printf("Type a number till which you want a counting of: \n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index + 1); // + 1 to get counting from 1 not from 0 
        index += 1;
    } while (num>index);
    
    return 0;
}
