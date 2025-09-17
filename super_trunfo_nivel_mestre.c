#include <stdio.h>

int main() {

    // ---------------------------
    // Variáveis da Carta 1
    // ---------------------------
    char estado1[3];        // Sigla do estado (2 chars + '\0')
    char codigo1[5];        // Código da carta (até 4 chars + '\0')
    char cidade1[50];       // Nome da cidade (até 49 chars + '\0')
    unsigned long int populacao1;  // População (unsigned long para suportar números grandes)
    float area1;            // Área em km²
    float pib1;             // PIB em bilhões
    int pontosTuristicos1;  // Número de pontos turísticos
    float densidadePopulacional1; // População / Área
    float pibPerCapita1;    // PIB em reais / População
    float superPoder1;      // Soma de todos atributos (com inverso da densidade)

    // ---------------------------
    // Variáveis da Carta 2
    // ---------------------------
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // ---------------------------
    // Mensagem inicial
    // ---------------------------
    printf("\nCadastre as primeiras 2 cartas para o Jogo.\n");
    printf("Use a sigla do Estado (ex: SP, RJ, MG) e códigos Ex: A01 OU A001!\n");
    printf("---------------------------------------------------\n");

    // ---------------------------
    // Entrada de dados da primeira carta
    // ---------------------------
    printf("\n***Cadastro da primeira carta!***\n\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado1); // lê string de 2 caracteres

    printf("Código da carta:\n");
    scanf("%4s", codigo1); // lê string de até 4 caracteres

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1); // lê string com espaços até '\n'

    printf("População:\n");
    scanf("%lu", &populacao1); // lê unsigned long int

    printf("Área (km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    // ---- Cálculos ----
    densidadePopulacional1 = populacao1 / area1; // fórmula densidade = pop / área
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // converte PIB para reais e divide por população
    float inversoDensidade1 = 1.0 / densidadePopulacional1; // inverso da densidade
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidade1; // soma de tudo

    printf("---------------------------------------------------\n");

    // ---------------------------
    // Exibindo resultado da primeira carta
    // ---------------------------
    printf("Aqui está sua primeira carta: \n\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", estado1, codigo1); // imprime estado + código juntos
    printf("Cidade: %s \n", cidade1);
    printf("População: %lu habitantes \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d pontos \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", pibPerCapita1);
    printf("Super Poder: %.2f \n", superPoder1); // mostra o valor calculado

    printf("---------------------------------------------------\n"); 

    // ---------------------------
    // Entrada de dados da segunda carta
    // ---------------------------
    printf("\n***Cadastro da segunda carta!***\n\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado2);

    printf("Código da carta:\n");
    scanf("%4s", codigo2);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("População:\n");
    scanf("%lu", &populacao2);

    printf("Área (km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // ---- Cálculos ----
    densidadePopulacional2 = populacao2 / area2; 
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 
    float inversoDensidade2 = 1.0 / densidadePopulacional2; 
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2; 

    printf("---------------------------------------------------\n");

    // ---------------------------
    // Exibindo resultado da segunda carta
    // ---------------------------
    printf("Aqui está sua segunda carta: \n\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu habitantes \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d pontos \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", pibPerCapita2);
    printf("Super Poder: %.2f \n", superPoder2);

    printf("---------------------------------------------------\n");

    // ---------------------------
    // Comparações (atributo a atributo)
    // ---------------------------
    printf("Comparação das 2 Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2)); // se populacao1 > populacao2 for verdadeiro retorna 1 (carta 1), senão retorna 2 (carta 2)
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2)); // maior vence
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2)); // maior vence
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2)); // maior vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 < densidadePopulacional2)); // MENOR vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2)); // maior vence
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2)); // maior vence


    return 0;
}
