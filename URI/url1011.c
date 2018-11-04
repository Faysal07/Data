#include<stdio.h>
int main()
{
    double r,pi=3.14159,VOLUME;
    scanf("%lf",&r);
    VOLUME=(4*pi*(r*r*r))/3;
    printf("VOLUME = %0.3lf",VOLUME);
    printf("\n");
    return 0;
}
