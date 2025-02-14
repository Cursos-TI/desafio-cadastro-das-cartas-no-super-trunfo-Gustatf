#include <stdio.h>

        //DESAFIO SUPER TRUNFO.C
        
int main() {

    //Area para definicao de variaveis

    char nome[40] = "cidade";
    char codigo[4];
    float area; 
    int populacao;
    int pontos_turisticos;
    float pib;

    //Area para entrada de dados

    printf("Entre com os dados da cidade:\n");
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", &codigo);

    printf("Digite a area da cidade:\n");
    scanf("%f", &area);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    //Area para exibicao de dados

    printf("Nome da cidade: %s\n", nome);
    printf("Codigo da cidade: %s\n", codigo);
    printf("Area da cidade: %f\n", area);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Pontos turisticos da cidade: %d\n", pontos_turisticos);
    printf("PIB da cidade: %f\n", pib);

    return 0;

}