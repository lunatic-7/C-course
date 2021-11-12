#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    
}

int main()
{
    char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    char str2[] = "harry";
    printStr(str);
    printStr(str2);
    printf("\n");

    char str3[27];
    gets(str3);
    
    printf("Printing using custom function printStr: \n");
    printStr(str3);
    
    printf("Printing using prinf function: \n");
    printf("%s", str3);
    printf("\n");

    printf("Printing using puts: \n");
    puts(str3);
    
    return 0;
}