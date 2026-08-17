#include <stdio.h>

int main() {

    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;


    // "cadastro da carta 1"

    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    //"cadastro da carta 2"

    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


   // exibição da carta 01

    printf("\n\n=============================\n");
    printf("        CARTA 1\n");
    printf("=============================\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);


   // exibição da carta 02

    printf("\n=============================\n");
    printf("        CARTA 2\n");
    printf("=============================\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);

    return 0;
}