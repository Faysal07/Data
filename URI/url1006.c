#include<stdio.h>
int main()
{
    double a,b,c,MEDIA;
    scanf("%lf%lf%lf",&a,&b,&c);
    MEDIA=((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("MEDIA = %0.1lf",MEDIA);
    printf("\n");
    return 0;
}
