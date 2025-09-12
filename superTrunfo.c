#include <stdio.h>

int main() {
    // Dados da Carta 1

    char estado1[3];      // Ex: "SP"
    char codigo1[5];      // até 4 caracteres + '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2

    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Mensagem inicial

    printf("Cadastre as primeiras 2 cartas para o Jogo.\n");
    printf("Use a sigla do Estado (ex: SP, RJ, MG) e códigos Ex: A01 OU A001!\n");

    // Entrada de dados da primeira carta 

    printf("\nCadastro da primeira carta!\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado1);

    printf("Código da carta:\n");
    scanf("%4s", codigo1);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("---------------------------------------------------\n");

    // Exibindo o resultado da primeira carta

    printf("Aqui está sua primeira carta: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d pontos \n", pontosTuristicos1);

    printf("---------------------------------------------------\n"); 

    // Entrada de dados da segunda carta 

    printf("\nCadastro da segunda carta!\n");

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

    printf("---------------------------------------------------\n");

    // Exibindo o resultado da segunda carta
    
    printf("Aqui está sua segunda carta: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos Turísticos: %d pontos \n", pontosTuristicos2);

    printf("---------------------------------------------------\n");

    printf("Parabéns, você cadastrou 2 novas cartas ao jogo!\n");

    return 0;
}
