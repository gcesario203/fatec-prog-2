#include <stdio.h>

void verifica_quadrante(int x, int y, int *quadrante_a_ser_populado)
{
    if (x == 0 && y == 0)
    {
        *quadrante_a_ser_populado = 0;

        return;
    }

    if (x < 0)
    {
        if (y > 0)
            *quadrante_a_ser_populado = 2;
        else
            *quadrante_a_ser_populado = 3;

        return;
    }

    if (y > 0)
        *quadrante_a_ser_populado = 1;
    else
        *quadrante_a_ser_populado = 4;
}

int main()
{
    int x, y, quadrante_resultante;

    printf("Digite um ponto no eixo x:\n");

    scanf("%d", &x);

    printf("Digite um ponto no eixo y:\n");

    scanf("%d", &y);

    verifica_quadrante(x, y, &quadrante_resultante);

    if(quadrante_resultante == 0){
        printf("Quadrante não encontrado");

        return 1;
    }

    printf("Quadrante resultante: %dº",  quadrante_resultante);

    return 0;
}