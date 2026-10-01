#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Area;
    const double pi=3.142;
    double r;
    //request radius
    printf("please provide radius\n");
    scanf("%lf", &r);
    Area= pi*r*r;
    printf("the Area, %lf", Area);
    return 0;
}
