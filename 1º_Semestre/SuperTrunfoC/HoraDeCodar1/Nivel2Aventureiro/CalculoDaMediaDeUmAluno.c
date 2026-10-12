#include <stdio.h>

int main (){
    float nota1, nota2, nota3, nota4;
    float resultado, media;

    printf("Digite a nota do 1º bimestre: ");
    scanf(" %f", &nota1);
    printf("\nDigite a nota do 2º bimestre: ");
    scanf(" %f", &nota2);
    printf("\nDigite a nota do 3º bimestre: ");
    scanf(" %f", &nota3);
    printf("\nDigite a nota do 4º bimestre: ");
    scanf(" %f", &nota4);

    resultado = nota1 + nota2 + nota3 + nota4;
    media = resultado / 4;

    printf("A sua media é: %.2f", media);
    return 0;
}