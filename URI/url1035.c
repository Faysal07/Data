#include<stdio.h>
int main()
{
    int a,b,c,d,sumone,sumtwo;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sumone=c+d;
    sumtwo=a+b;
    if(b>c && d>a)
    {
        if(sumone>sumtwo)
        {
            if(c>0 && d>0)
            {
                if(a%2==0)
                {
                    printf("Valores aceitos");
                }
                else
                {
                    goto end;
                }

            }
            else
            {
                goto end;
            }

        }
        else
        {
            goto end;
        }

    }
    else
    {
        end :
        printf("Valores nao aceitos");
    }
    printf("\n");
    return 0;
}
