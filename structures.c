#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char favt_chr;
    char name[27];
// } harry, ravi shubham;  // I could define them here direclty like this!
};

struct Student harry, ravi, shubham; // Global variable, I can access it in any function.

void print()
{
    printf("Harry is named as: %s\n", harry.name);
}

int main()
{
    // struct Student harry, ravi, shubham; // Local variable, Only main() function, has its access.
    harry.id = 1;
    shubham.id = 3;
    ravi.id = 2;
    harry.marks = 17;
    ravi.marks = 98;
    harry.favt_chr = 'J';
    ravi.favt_chr = 'L';
    shubham.favt_chr = 'K';
    strcpy(harry.name, "Harry Potter of the year!");
    
    printf("Harry got %d marks.\n", harry.marks);
    printf("Shubham's id is: %d\n", shubham.id);
    printf("Ravi's favorite character is: %c\n", ravi.favt_chr);
    printf("Harry is named as: %s\n", harry.name);
    print();
    return 0;
}