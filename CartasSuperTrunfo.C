#include <stdio.h>
#include <string.h>

#define TAM_NOME 50
#define TAM_CODIGO 5

int main() {
    char estado1, estado2;
    char codigo1[TAM_CODIGO], codigo2[TAM_CODIGO];
    char nomeCidade1[TAM_NOME], nomeCidade2[TAM_NOME];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; // PIB em bilhões
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapta1, pibPerCapta2;

    // --- Cadastro da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    getchar(); // limpar buffer do teclado
    fgets(nomeCidade1, TAM_NOME, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // remove o \n do final

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapta1 = (pib1 * 1000000000) / populacao1;

    // --- Cadastro da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    getchar(); // limpar buffer
    fgets(nomeCidade2, TAM_NOME, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // remove \n

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapta2 = (pib2 * 1000000000) / populacao2;

    // --- Impressão dos Dados ---
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapta1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapta2);

    return 0;
}
