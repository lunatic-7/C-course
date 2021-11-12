#include <stdio.h>

/* A Program for Conversion:

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/

float km_ml()
{
    float a;
    char quit;
    while (1)
    {
        printf("kms to miles: \n");
        scanf("%f", &a);
        return ("%f\n", a * 0.621371);
    }
} 

float in_ft()
{
    float b;
    char quit;
    while (1)
    {
        printf("Inches to foot: \n");
        scanf("%f", &b);
        return ("%f\n", b * 0.83333);
    }
} 

float cms_in()
{
    float c;
    char quit;
    while (1)
    {
        printf("cms to inches: \n");
        scanf("%f", &c);
        return ("%f\n", c * 0.393701);
    }
} 

float pn_kg()
{
    float d;
    char quit;
    while (1)
    {
        printf("pound to kgs: \n");
        scanf("%f", &d);
        return ("%f\n", d * 0.453592);
    }
} 

float in_mt()
{
    float e;
    char quit;
    while (1)
    {
        printf("Inches to Metres: \n");
        scanf("%f", &e);
        return ("%f\n", e * 0.0254);
    }
} 


int main()
{
    
    float k, l, m, n, o;
    int p;
    start:
    printf("\n");
    printf("Conversion Calculator: \n");
    printf("Enter '1' for (kms to miles)\n");
    printf("Enter '2' for (inches to feet)\n");
    printf("Enter '3' for (cms to inches)\n");
    printf("Enter '4' for (pounds to kgs)\n");
    printf("Enter '5' for (inches to meters)\n");
    printf("(((Enter '6' to EXIT the program.)))\n");
    scanf("%d", &p);
    if (p == 1)
    {
        k = km_ml();
        printf("The answer is %f miles\n", k);
        goto start;
    }   
    
    else if (p == 2)
    {
        l = in_ft();
        printf("The answer is %f feet\n", l);
        goto start;
    }
    else if (p == 3)
    {
        m = cms_in();
        printf("The answer is %f inches\n", m);
        goto start;
    }
    else if (p == 4)
    {
        n = pn_kg();
        printf("The answer is %f kgs\n", n);
        goto start;
    }
    else if (p == 5)
    {
        o = in_mt();
        printf("The answer is %f meters\n", o);
        goto start;
    }
    else if (p == 6)
    {
        goto end;
    }
    else
    {
        printf("Enter a Valid entity!!!\n");
        goto start;
    }
    
    end:
    return 0;
}
