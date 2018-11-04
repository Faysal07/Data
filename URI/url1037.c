#include<stdio.h>
int main()
{

    float a,b,c,d;
    scanf("%f",&a);
    if(a>=75.01 && a<=100.00)
    {
        printf("Intervalo (75,100]");
    }
    else if(a>=50.01 && a<=75.00)
    {
        printf("Intervalo (50,75]");
    }
    else if(a>=25.01 && a<=50.00)
    {
        printf("Intervalo (25,50]");
    }
    else if(a>=0.00 && a<=25.00)
    {
        printf("Intervalo [0,25]");
    }
    else
    {
        printf("Fora de intervalo");
    }
    return 0;
}
