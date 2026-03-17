#include <stdio.h>


void calcula_idade_em_dias(int anos, int meses, int dias, int *idade_em_dias){
    *idade_em_dias = (anos * 365) + (meses * 30) + dias;
}


int main(){
    int anos, meses, dias, idade_em_dias;

    printf("Digite a idade em anos, meses e dias:\n");

    scanf("%d", &anos);

    scanf("%d", &meses);

    scanf("%d", &dias);

    calcula_idade_em_dias(anos, meses, dias, &idade_em_dias);

    printf("A idade em dias é: %d\n", idade_em_dias);

    return 0;
}