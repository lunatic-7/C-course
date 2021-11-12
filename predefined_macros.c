#include <stdio.h>

int main()
{
    printf("Today's Date is: %s\n", __DATE__);
    printf("Current Time is: %s\n", __TIME__);
    printf("Current file's name is: %s\n", __FILE__);
    printf("Current line no. is: %d\n", __LINE__);
    printf("If compiled is ANSI: %d\n", __STDC__);
    return 0;
}