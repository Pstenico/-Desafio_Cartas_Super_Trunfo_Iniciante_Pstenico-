#include <stdio.h>

int main() {

    // ---------------------------
    // Variáveis da Carta 1
    // ---------------------------
    char estado1[3];        // Sigla do estado (ex: SP)
    char codigo1[5];        // Código da carta (até 4 chars)
    char cidade1[50];       // Nome da cidade
    int populacao1;         // População inteira
    float area1;            // Área em km²
    float pib1;             // PIB em bilhões
    int pontosTuristicos1;  // Número de pontos turísticos
    float densidadePopulacional1; // População / Área
    float pibPerCapita1;    // PIB (em reais) / População

    // ---------------------------
    // Variáveis da Carta 2
    // ---------------------------
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // ---------------------------
    // Mensagem inicial
    // ---------------------------
    printf("Cadastre as primeiras 2 cartas para o Jogo.\n");
    printf("Use a sigla do Estado (ex: SP, RJ, MG) e códigos Ex: A01 OU A001!\n");
    printf("---------------------------------------------------\n");

    // ---------------------------
    // Entrada de dados da 1ª carta
    // ---------------------------
    printf("\n***Cadastro da primeira carta!***\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado1);

    printf("Código da carta:\n");
    scanf("%4s", codigo1);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1); // " %[^\n]" Lê string com espaços

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // ---- Cálculos ----
    densidadePopulacional1 = populacao1 / area1;       // hab/km²
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // converte PIB para reais antes de dividir

    printf("---------------------------------------------------\n");

    // ---------------------------
    // Exibindo resultado da 1ª carta
    // ---------------------------
    printf("Aqui está sua primeira carta: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d pontos \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", pibPerCapita1);

    printf("---------------------------------------------------\n"); 

    // ---------------------------
    // Entrada de dados da 2ª carta
    // ---------------------------
    printf("\n***Cadastro da segunda carta!***\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado2);

    printf("Código da carta:\n");
    scanf("%4s", codigo2);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // ---- Cálculos ----
    densidadePopulacional2 = populacao2 / area2;         // hab/km²
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;    // converte PIB para reais antes de dividir

    printf("---------------------------------------------------\n");

    // ---------------------------
    // Exibindo resultado da 2ª carta
    // ---------------------------

    printf("Aqui está sua segunda carta: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d pontos \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", pibPerCapita2);

    printf("---------------------------------------------------\n");

    // Mensagem final
    printf("Parabéns, você cadastrou 2 novas cartas ao jogo!\n");

    return 0;
}
