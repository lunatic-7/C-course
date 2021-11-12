#include <stdio.h>

void chek(char chk)
{
    if (chk == 'a')
    {
        printf("This is Vowel");
    }
    else if (chk == 'e')
    {
        printf("This is Vowel");
    }
    else if (chk == 'i')
    {
        printf("This is Vowel");
    }
    else if (chk == 'o')
    {
        printf("This is Vowel");
    }
    else if (chk == 'u')
    {
        printf("This is Vowel");
    }
    else
    {
        printf("This is consonent");
    }

    // chk == 'a'||'e'||'i'||'o'||'u' ? printf("This is Vowel") : printf("This is consonent.");
}

int main()
{
    char chk;

    printf("Enter your alphabet: \n");

    scanf("%c", &chk);
    chek(chk);

    return 0;
}