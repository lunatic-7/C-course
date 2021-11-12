#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i;
    int count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in string.
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i]) // &str[i], here is starting pnt. of string, oldWord means
        {                                        // till the old word.
            count++;

            // Jump over this word.
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaceWord.
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    // You have to fill in values to a template letter.txt
    // Letter.txt looks something like this:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems. We plan to server you again soon.
    // You have to read this file and replace these values:
    // {{name}}   - Harry
    // {{item}}   - Table Fan
    // {{outlet}} - Ram Laxmi fan outlet

    // Use file functions in c to accomplish the same

    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);

    // Call the replaceWord function and generate newStr.
    char *newStr;
    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Harry");
    printf("The given bill template was: %s\n", newStr);

    fprintf(ptr2, "%s", newStr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}
