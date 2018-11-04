#include<stdio.h>
int main()
{
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO,pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    TRIANGULO=(1*A*C)/2;
    CIRCULO=pi*C*C;
    TRAPEZIO=((A+B)/2)*C;
    QUADRADO=B*B;
    RETANGULO=A*B;
    printf("TRIANGULO: %0.3lf\n",TRIANGULO);
    printf("CIRCULO: %0.3lf\n",CIRCULO);
    printf("TRAPEZIO: %0.3lf\n",TRAPEZIO);
    printf("QUADRADO: %0.3lf\n",QUADRADO);
    printf("RETANGULO: %0.3lf",RETANGULO);
    printf("\n");
    return 0;
}
