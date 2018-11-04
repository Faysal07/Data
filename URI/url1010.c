#include<stdio.h>'
int main()
{
    int a,b,c,d;
    double f,g,s;
    scanf("%d%d%lf",&a,&b,&f);
    scanf("%d%d%lf",&c,&d,&g);
    s=(b*f)+(d*g);
    printf("VALOR A PAGAR: R$ %0.2lf",s);
    printf("\n");
    return 0;
}
