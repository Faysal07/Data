#include<stdio.h>
int main()
{
    float a,b,c,d,ave;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    ave=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    printf("Media: %0.1f\n",ave);
    if(ave>=7.0)
    {
        printf("Aluno aprovado.");
    }
    else if(ave<5.0)
    {
        printf("Aluno reprovado.");
    }
    else if(ave>=5.0 && ave<=6.9)
    {
        printf("Aluno em exame.\n");
        float finalave,f;
        scanf("%f",&f);
        printf("Nota do exame: %.1f\n",f);
        finalave=(ave+f)/2;
        if(finalave>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(finalave<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f",finalave);
    }
    else;
    printf("\n");
    return 0;
}
