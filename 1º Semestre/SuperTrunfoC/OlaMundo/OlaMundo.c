#include <stdio.h>

int main() {
    int idade;
    float peso;
    char inicial;
    char nome[20];

    printf("Olá, Mundo!\nPreencha a sua ficha de cadastro:\n");

    printf("Digite o seu nome:");
    scanf("%s", nome);

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Agora digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);
    
    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Seu peso é: %.2f\n", peso);
    printf("sua inicial é: %c", inicial);

    return 0; 
}