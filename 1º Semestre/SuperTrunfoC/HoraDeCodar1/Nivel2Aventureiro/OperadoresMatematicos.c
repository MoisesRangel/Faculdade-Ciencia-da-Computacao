#include <stdio.h>

int main (){
    /*int numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;
    printf("\nA soma dos números é: %d\n", resultado);

    resultado = numero1 - numero2;
    printf("\nA subtração dos números é: %d\n", resultado);

    resultado = numero1 * numero2;
    printf("\nA multiplicação dos números é: %d\n", resultado);

    if (numero2 != 0) {
        resultado = numero1 / numero2;
        printf("\nA divisão dos números é: %d\n", resultado);
    } else {
        printf("\nNão é possível dividir por zero.\n");
    }*/
    
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
}