#include <stdio.h>
#include <string.h>

/*

Input:
<h1> This is a heading </h1>

Output:
This is a heading

*/

void parser(char *var)
{
    int in, index;
    in = 0;
    index = 0;

    for (int i = 0; i < strlen(var); i++)
    {
        if (var[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (var[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            var[index] = var[i];
            index++;
        }
    }
    var[index] = '\0';    
       
    // Remove the trailing spaces from beginning:
    while (var[0] == ' ')
    // shift the string to the left.
    {
        for (int i = 0; i < strlen(var); i++)
        {
            var[i] = var[i + 1];
        }
        
    }
    
    // Remove the trailing spaces from the end.
    while (var[strlen(var) - 1] == ' ')
    {
        var[strlen(var) - 1] = '\0';
    }
       
}

int main()
{
    char string[] = "<h1>       This is a heading...   </h1>";
    parser(string);
    // printf("Original string: %s\n",string);
    printf("The parsed string is: ~~%s~~\n", string);
    return 0;
}

