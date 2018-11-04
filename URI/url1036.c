#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,r1,r2;
    scanf("%lf%lf%lf",&a,&b,&c);
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    if(a!=0 && (b*b)-(4*a*c)>0)
    {
        printf("R1 = %0.5lf\n",r1);
        printf("R2 = %0.5lf\n",r2);
    }
    else
    {
        printf("Impossivel calcular");
    }
    printf("\n");
    return 0;
}
