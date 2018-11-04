#include<stdio.h>
int main()
{
    int n,x;
    float y;
    scanf("%d%d",&n,&x);
    switch(n)
    {
    case 1 :
        y=x*4.00;
        printf("Total: R$ %0.2f",y);
        break;
    case 2 :
        y=x*4.50;
        printf("Total: R$ %0.2f",y);
        break;
    case 3 :
        y=x*5.00;
        printf("Total: R$ %0.2f",y);
        break;
    case 4 :
        y=x*2.00;
        printf("Total: R$ %0.2f",y);
        break;
    case 5 :
        y=x*1.50;
        printf("Total: R$ %0.2f",y);
        break;
    }
    printf("\n");
    return 0;
}
