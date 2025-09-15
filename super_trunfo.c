#include <stdio.h>

int main() {

    char estado1[50];
    char Codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float PIBPERCAPITA1;
    float superPoder1;

    char estado2[50];
    char Codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float PIBPERCAPITA2;
    float superPoder2;

    printf("!!! Cadastro da carta 1 !!! \n");    
    scanf("%s", estado1);
    scanf("%s", Codigo1);
    scanf(" %[^\n]", cidade1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;
    PIBPERCAPITA1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + turismo1 + PIBPERCAPITA1 + (1.0f / densidade1);

    printf("!!! Cadastro da carta 2 !!! \n");     
    scanf("%s", estado2);
    scanf("%s", Codigo2);
    scanf(" %[^\n]", cidade2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    PIBPERCAPITA2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + turismo2 + PIBPERCAPITA2 + (1.0f / densidade2);

    printf("\n=== Comparacao das Cartas ===\n");
    printf("Populacao: %s venceu (%d)\n", populacao1 > populacao2 ? "Carta 1" : "Carta 2", populacao1 > populacao2);
    printf("Area: %s venceu (%d)\n", area1 > area2 ? "Carta 1" : "Carta 2", area1 > area2);
    printf("PIB: %s venceu (%d)\n", pib1 > pib2 ? "Carta 1" : "Carta 2", pib1 > pib2);
    printf("Pontos Turisticos: %s venceu (%d)\n", turismo1 > turismo2 ? "Carta 1" : "Carta 2", turismo1 > turismo2);
    printf("Densidade Populacional: %s venceu (%d)\n", densidade1 < densidade2 ? "Carta 1" : "Carta 2", densidade1 < densidade2);
    printf("PIB per Capita: %s venceu (%d)\n", PIBPERCAPITA1 > PIBPERCAPITA2 ? "Carta 1" : "Carta 2", PIBPERCAPITA1 > PIBPERCAPITA2);
    printf("Super Poder: %s venceu (%d)\n", superPoder1 > superPoder2 ? "Carta 1" : "Carta 2", superPoder1 > superPoder2);

    return 0;
}
