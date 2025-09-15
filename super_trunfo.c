#include <stdio.h>

int main() {

    // VARIAVEIS CARTA 1
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

    // VARIAVEIS CARTA 2
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
    printf("\n Uma letra de 'A' a 'H':\n");
    scanf("%s", estado1);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf("%s", Codigo1);
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1);
    printf("Numero de habitantes:\n");
    scanf("%lu", &populacao1);
    printf("Area da cidade (km²):\n");
    scanf("%f", &area1);
    printf("PIB da cidade (em bilhoes):\n");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &turismo1);

    densidade1 = populacao1 / area1;
    PIBPERCAPITA1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + turismo1 + PIBPERCAPITA1 + (1.0f / densidade1);

    printf("\n!!! Cadastro da carta 2 !!! \n");     
    printf("\n Uma letra de 'A' a 'H':\n");
    scanf("%s", estado2);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf("%s", Codigo2);
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade2);
    printf("Numero de habitantes:\n");
    scanf("%lu", &populacao2);
    printf("Area da cidade (km²):\n");
    scanf("%f", &area2);
    printf("PIB da cidade (em bilhoes):\n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &turismo2);

    densidade2 = populacao2 / area2;
    PIBPERCAPITA2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + turismo2 + PIBPERCAPITA2 + (1.0f / densidade2);

    printf("\n=== Carta 1 ===\n");
    printf("Estado:%s\n" , estado1);
    printf("Codigo:%s\n" , Codigo1);
    printf("Cidade:%s\n" , cidade1);
    printf("Populacao:%lu\n" , populacao1);
    printf("Area(km²):%f\n" , area1);
    printf("PIB:%f bilhoes\n" , pib1);
    printf("Pontos turisticos:%d\n" , turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBPERCAPITA1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado:%s\n" , estado2);
    printf("Codigo:%s\n" , Codigo2);
    printf("Cidade:%s\n" , cidade2);
    printf("Populacao:%lu\n" , populacao2);
    printf("Area(km²):%f\n" , area2);
    printf("PIB:%f bilhoes\n" , pib2);
    printf("Pontos turisticos:%d\n" , turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBPERCAPITA2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n=== Comparacao das Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPERCAPITA1 > PIBPERCAPITA2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
