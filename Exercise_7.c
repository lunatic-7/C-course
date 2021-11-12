#include <stdio.h>
#include <string.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
struct Drivers
{
    char name[37];
    char dlno[37];
    char route[37];
    int kms;
};


int main()
{

    struct Drivers d1, d2, d3;
    
    printf("Welcome to Casanova's Travel Agency, We are hiring Drivers!!! \nJust input some necessary datials " 
            "and you are good to go!\n\n");
    printf("Enter the details of the Driver no. 1:\n");
    printf("Enter the name of first driver:\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of first driver:\n");
    scanf("%s", &d1.dlno);
    
    printf("Enter the route of first driver:\n");
    scanf("%s", &d1.route);

    printf("Enter the number of kms of first driver:\n");
    scanf("%d", &d1.kms);
    
    
    printf("Enter the details of the Driver no. 2:\n");
    printf("Enter the name of second driver:\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of second driver:\n");
    scanf("%s", &d2.dlno);
    
    printf("Enter the route of second driver:\n");
    scanf("%s", &d2.route);

    printf("Enter the number of kms of second driver:\n");
    scanf("%d", &d2.kms);
    
    
    printf("Enter the details of the Driver no. 3:\n");
    printf("Enter the name of third driver:\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of third driver:\n");
    scanf("%s", &d3.dlno);
    
    printf("Enter the route of third driver:\n");
    scanf("%s", &d3.route);

    printf("Enter the number of kms of third driver:\n");
    scanf("%d", &d3.kms);
    
    printf("***********Printing details of all the drivers************\n\n");
    printf("For Driver no. 1\n\nName is %s\n", d1.name);
    printf("Dlno is %s\n", d1.dlno);
    printf("Route is %s\n", d1.route);
    printf("Travelled Kms is %d\n\n", d1.kms);
    
    printf("For Driver no. 2\n\nName is %s\n", d2.name);
    printf("Dlno is %s\n", d2.dlno);
    printf("Route is %s\n", d2.route);
    printf("Travelled Kms is %d\n\n", d2.kms);
    
    printf("For Driver no. 3\n\nName is %s\n", d3.name);
    printf("Dlno is %s\n", d3.dlno);
    printf("Route is %s\n", d3.route);
    printf("Travelled Kms is %d", d3.kms);

    
    return 0;
}
