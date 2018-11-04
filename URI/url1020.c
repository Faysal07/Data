#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/365;
    n=n%365;
    b=n/30;
    c=n%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",a,b,c);
    printf("\n");
    return 0;
}
