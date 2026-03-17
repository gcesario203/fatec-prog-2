#include <stdio.h>

float calcula_hipotenusa(float base, float altura){
    if(base < 0 || altura < 0)
        return 0.0;

    return (base * base) + (altura * altura);
}

int main(){
    float base, altura;

    printf("Digite o tamanho da base do triângulo:\n");

    scanf("%f", &base);

    printf("Digite a altura do triângulo:\n");

    scanf("%f", &altura);

    printf("Hipotenusa do triângulo: %2.f", calcula_hipotenusa(base, altura));

    return 0;
}