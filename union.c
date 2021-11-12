#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char favt_chr;
    char name[27];
}s1;

union Student2
{
    int id;
    int marks;
    char favt_chr;
    char name[27];
}s2;



int main()
{
    struct Student;
    s1.id = 1;
    s1.marks = 17;
    s1.favt_chr = 'J';
    strcpy(s1.name, "Harry Potter of the year!");
    
    printf("s1 got %d marks.\n", s1.marks);
    printf("s1's id is: %d\n", s1.id);
    printf("s1's favorite character is: %c\n", s1.favt_chr);
    printf("s1 is named as: %s\n\n", s1.name);    

    union Student2;
    s2.id = 2;
    s2.marks = 27;
    s2.favt_chr = 'K';
    strcpy(s2.name, "Jimmy Sierra of the year!"); //  Whatever is in last will be considered in union.
    // Rest will get corrupted.

    printf("s2 got %d marks.\n", s2.marks);
    printf("s2's id is: %d\n", s2.id);
    printf("s2's favorite character is: %c\n", s2.favt_chr);
    printf("s2 is named as: %s\n", s2.name);

    return 0;
}