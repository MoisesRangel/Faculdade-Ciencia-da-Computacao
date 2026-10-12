#include <stdio.h>

int main (){
    
    int numero1, numero2, resultado;

    printf("Programa que calcula os operadores matemáticos inteiros:\n");
    printf("Digite o primeiro número: ");
    scanf(" %d", &numero1);
    printf("\nDigite o segundo número: ");
    scanf(" %d", &numero2);

    resultado = numero1 + numero2;
    printf("\n%d + %d = %d", numero1, numero2, resultado);

    resultado = numero1 - numero2;
    printf("\n%d - %d = %d", numero1, numero2, resultado);

    resultado = numero1 * numero2;
    printf("\n%d * %d = %d", numero1, numero2, resultado);

    resultado = numero1 / numero2;
    printf("\n%d / %d = %d", numero1, numero2, resultado);

    return 0;
}