// Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.

#include <stdio.h>

int main(){
    float a, b, c, soma;

    printf("INFORME O VALOR A: ");
    scanf("%f", &a);

    printf("INFORME O VALOR B: ");
    scanf("%f", &b);

    printf("INFORME O VALOR C: ");
    scanf("%f", &c);

    soma = a + b;

    if (soma < c){
        printf("SOMA DE A E B É %2.f, LOGO É MENOR QUE C", soma);
    }

    if(soma == c){
        printf("SOMA DE A E B É %2.f, LOGO É IGUAL A C", soma);
    }
    else{
        printf("SOMA DE A E B É %2.f, LOGO NÃO É MENOR QUE C", soma);
    }
}