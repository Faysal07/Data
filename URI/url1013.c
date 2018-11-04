#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d eh o maior",a);
        }
        else
            printf("%d eh o maior",c);
    }
    else if(b>c)
    {
        printf("%d eh o maior",b);
    }
    else
    {
        printf("%d eh o maior",c);
    }
    printf("\n");
    return 0;
}
