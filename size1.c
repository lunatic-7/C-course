#include <stdio.h>

int main()
{
    printf("%d", sizeof(int));  // lu means unsigned long int. The size will come out in Bytes.
    return 0;
}

// 1 Byte = 8 bits
// 1 gb = 1024 mb
// 1 gb = 1024 * 1024 kb
// 1 gb = 1024 * 1024 * 1024 bytes
// 1 gb = 1024 * 1024 * 1024 * 8 bits  ( 1 byte is the space acquired by a char (data type) in RAM.)