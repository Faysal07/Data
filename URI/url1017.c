#include<stdio.h>
int main()
{
    int a,b;
    double sum,distance;
    scanf("%d%d",&a,&b);
    sum=(double)b/12;
    distance=a*sum;
    printf("%0.3lf",distance);
    printf("\n");
    return 0;
}
