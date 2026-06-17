#include <stdio.h>

int main(){

    char estado, codigoDaCarta[3], nomeDaCidade[20];
    int populacao, pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita;

    char estado2, codigoDaCarta2[3], nomeDaCidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Para que possamos dar continuidade no jogo será necessário cadastrar duas cartas.\n");
    printf("Por gentileza preencha os dados corretamente da primeira carta.\n");
    
    printf("\nDigite a inicial do seu estado: ");
    scanf(" %c", &estado);

    printf("\nDigite o código da carta(A letra do estado seguida de um número de 01 a 04, exemplo A01, B03): ");
    scanf("%s", &codigoDaCarta);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", &nomeDaCidade);

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("\nDigite a área da cidade em quilometros quadrados: ");
    scanf("%f", &area);

    printf("\nDigite o PIB, produto interno bruto da cidade: ");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos);

    
    printf("\nPor gentileza preencha os dados corretamente da segunda carta.\n");

    printf("\nDigite a inicial do seu estado: ");
    scanf(" %c", &estado2);

    printf("\nDigite o código da carta(A letra do estado seguida de um número de 01 a 04, exemplo A01, B03): ");
    scanf("%s", &codigoDaCarta2);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", &nomeDaCidade2);

    printf("\nDigite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("\nDigite a área da cidade em quilometros quadrados: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB, produto interno bruto da cidade: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 1:\n");
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigoDaCarta);
    printf("\nNome da Cidade: %s", &nomeDaCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f", area);
    printf("\nPIB: %.2f", pib);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos);
    densidadePopulacional = (float) populacao / area;
    printf("\nDensidade Populacional: %.2f", densidadePopulacional);
    pibPerCapita = (float) pib / populacao;
    printf("\nPib Per Capita: %.2f\n", pibPerCapita);

    printf("\nCarta 2:\n");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoDaCarta2);
    printf("\nNome da Cidade: %s", nomeDaCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
    densidadePopulacional2 = (float) populacao2 / area2;
    printf("\nDensidade Populacional: %.2f", densidadePopulacional2);
    pibPerCapita2 = (float) pib2 / populacao2;
    printf("\nPib Per Capita: %.2f\n\n", pibPerCapita2);

    return 0;
}