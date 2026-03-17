#include <stdio.h>

void reajuste_salarial(float salario, float reajuste, float *salario_reajustado){
    if(salario < 0)
        *salario_reajustado = 0.0;

    float reajuste_percentual = reajuste / 100.0;

    *salario_reajustado = salario + (salario * reajuste_percentual);
}

int main(){
    float salario, reajuste, salario_reajustado;

    printf("Digite o salário do funcionário:\n");

    scanf("%f", &salario);

    printf("Digite o índice de ajuste:\n");

    scanf("%f", &reajuste);

    reajuste_salarial(salario, reajuste, &salario_reajustado);

    printf("Salario reajustado: %2.f\n", salario_reajustado);

    return 0;
}