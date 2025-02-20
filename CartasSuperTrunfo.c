#include <stdio.h>

// Criando as Cartas do Super Trunfo
// Sistema para cadastrar as cartas com informações sobre as cidades

int main() {

    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("\nCadastre sua primeira carta:\n");
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nCadastre sua segunda carta:\n");
    printf("Digite o estado (A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área em km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Calculando a densidade populacional e PIB per capita

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 

    // Exibição dos dados cadastrados
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}