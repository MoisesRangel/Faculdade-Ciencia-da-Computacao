#include <stdio.h>

int main() {
    int idade;
    float peso;
    char turma;
    char nome[20];

    printf("Olá, Mundo!\n");

    printf("Digite o seu nome:");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Agora digite o seu peso: ");
    scanf("%f", &peso);
    printf("Seu peso é: %.2f\n", peso);

    printf("Digite a inicial da sua turma: ");
    scanf(" %c", &turma);
    printf("sua turma é: %c", turma);

    return 0; 
}