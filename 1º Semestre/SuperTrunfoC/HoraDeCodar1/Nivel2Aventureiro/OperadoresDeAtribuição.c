#include <stdio.h>

int main (){
    int numero, resultado;

    printf("Programa que calcula os operadores matemáticos inteiros:\n");
    printf("Digite o primeiro número: ");
    scanf(" %d", &numero);

    //atribuição simples resultado = numero1
    resultado = numero;
    printf("\nResultado = %d", resultado);
    resultado = numero;

    //atribuição com soma resultado += numero == resultado = resultado + numero
    resultado += numero;
    printf("\nResultado = %d", resultado);
    resultado = numero;//resetando os valores iniciais

    //atribuição com subtração resultado -= numero == resultado = resultado - numero
    resultado -= numero;
    printf("\nResultado = %d", resultado);
    resultado = numero;//resetando os valores iniciais

    //atribuição com multiplicação resultado *= numero == resultado = resultado * numero
    resultado *= numero;
    printf("\nResultado = %d", resultado);
    resultado = numero;//resetando os valores iniciais

    //atribuição com divisão resultado /= numero == resultado = resultado / numero
    resultado /= numero;
    printf("\nResultado = %d", resultado);
    resultado = numero; //resetando os valores iniciais
}