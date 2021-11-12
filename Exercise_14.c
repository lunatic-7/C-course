#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    float dis;
    dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));  // sqrt means square root, and pow for taking power.
    printf("The Eucledien distance is: %0.2f", dis);

    return 0;
}

int main()
{
    int x1, y1, x2, y2;
    // take x1, y1 and x2, y2 from the user using scanf
    printf("Give x1, y1, and x2, y2 and we will find the area of circle, considering its distance as diameter. \n\n");

    printf("x1: ");
    scanf("%d", &x1);
    printf("y1: ");
    scanf("%d", &y1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("y2: ");
    scanf("%d", &y2);

    Edistance(x1, y1, x2, y2);
    return 0;
}
