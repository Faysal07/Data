#include<stdio.h>
int main()
{
    int a,b;
    double c,SALARY;
    scanf("%d%d%lf",&a,&b,&c);
    SALARY=b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf",SALARY);
    printf("\n");
    return 0;
}
