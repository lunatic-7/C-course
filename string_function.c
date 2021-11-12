#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "casanova";
    char s2[] = "ray";
    char s3[37];
    char s4[37];
    char s5[37];

    // puts(strcat(s1, s2)); // concatinates them.
    printf("\n");
    printf("The length of s1 string is: %d\n", strlen(s1));  // prints length
    printf("The length of s2 string is: %d\n", strlen(s2));
    
    printf("The reversed string of s1 is: ");  // print reversed string
    puts(strrev(s1));
    printf("The reversed string of s2 is: ");
    puts(strrev(s2));

    // s3 = strcat(s2, s2);  // We can define something in variable like this in C
    strcpy(s3, strcat(s1, s2)); // copies 2nd option in 1st.
    puts(s3);

    printf("Enter yours and your friends name respectively: \n");
    gets(s4);
    gets(s5);
    printf("%s is a friend of %s...", s4, s5);

    return 0;
}