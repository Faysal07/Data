#include<stdio.h>
int main()
{
    char s;
    double a,b,TOTAL;
    scanf("%s%lf%lf",&s,&a,&b);
    TOTAL=a+((b*15)/100);
    printf("TOTAL = R$ %0.2lf",TOTAL);
    printf("\n");
    return 0;
}
