#include <stdio.h>

int main()
{
    FILE *ptr = NULL;  // Just a good convention, before opening any file.
    char string[84] = "This content was produced by functions_for_file_IO.c";

    // ******** Reading a file ********
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of this file has %s\n", string);  // It will give string until first blank space.
    fclose(ptr);

    // ******** Writing to a file *********

    ptr = fopen("myfile.txt", "w");  // w erases all the content in file and then write new content in it.
    fprintf(ptr, "%s", string);
    fclose(ptr);

    return 0;
}