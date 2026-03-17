#include <stdio.h>

void calculo(float x, float a, float c, float *resultado)
{
    *resultado = (x * x) + (4 * a * c) - 36;
}

int main()
{
    float x, a, c, resultado;

    printf("DESIGNAÇÃO DO EXERCICIO: CALCULAR X**2 + 4 * A + C - 36\n");

    printf("Digite o valor do x da equação: \n");

    scanf("%f", &x);

    printf("Digite o valor do a da equação: \n");

    scanf("%f", &a);

    printf("Digite o valor do c da equação: \n");

    scanf("%f", &c);

    calculo(x, a, c, &resultado);

    printf("Resultado: %2.f", resultado);

    return 0;
}