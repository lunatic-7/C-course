#include <stdio.h>
#include <string.h>

typedef struct Student 
{
    int id;
    int marks;
    char favt_chr;
    char name[27];
} st;  // we changed this whole struct Student to st here.


int main()
{

    // int *a, b;  // It will make only a as pointer, b will still remain as int, But we can make both as pointer
    // using typedef
    typedef int* intPointer;
    intPointer a, b;
    int c = 77;
    a = &c;
    b = &c;
    printf("Address of c using a: %d\n", a);
    printf("Address of c using b: %d\n", b);

    st s1, s2, s3;
    s1.id = 77;
    strcpy(s3.name, "s3 is Don bro...");
    printf("Identity of s3 revelead: %s\n", s3.name);

    // typedef <previous_name> <alias_name (nick name)>
    typedef unsigned long ul; // Here, we made a nike name of unsigned long as ul which we can use further.
    ul l1, l2, l3;

    typedef int integer;
    integer i = 7;
    printf("The value of i is: %d\n", i);
    return 0;
}