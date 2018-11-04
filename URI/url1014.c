#include<stdio.h>
int main()
{
    int a;
    double b,result;
    scanf("%d%lf",&a,&b);
    result=a/b;
    printf("%0.3lf km/l",result);
    printf("\n");
    return 0;
}
