#include <stdio.h>

int main() {

    // VARIAVEIS CARTA 1

    char estado1[50];
    char Código1[4];
    char cidade1[50];
    int população1;
    float area1;
    float pib1;
    int turismo1;

    // VARIAVEIS CARTA 2

    char estado2[50];
    char Código2[4];
    char cidade2[50];
    int população2;
    float area2;
    float pib2;
    int turismo2;

    printf("!!! Cadastro da carta 1 !!! \n");     
    printf("\n Uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%s", estado1);
    
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", Código1);

    printf("nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("O número de habitantes da cidade:\n");
    scanf("%d", &população1);

    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);

    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turismo1);


    // ATÉ AQUI EU COLETEI OS DADOS DA CARTA 1 

    printf("\n!!! Cadastro da carta 2 !!! \n");     
    printf("\nUma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%s", estado2);
    
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", Código2);

    printf("nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("O número de habitantes da cidade:\n");
    scanf("%d", &população2);

    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &turismo2);

    // ATÉ AQUI EU COLETEI OS DADOS DA CARTA 2 



    printf("\n=== Carta 1 ===\n");
    printf("Estado:%s\n" , estado1);
    printf("Codigo:%s\n" , Código1);
    printf("Cidade:%s\n" , cidade1);
    printf("População:%d\n" , população1);
    printf("Area(km²):%f\n" , area1);
    printf("PIB:%f\n" , pib1);
    printf("Pontos turisticos:%d\n" , turismo1);


    // AQUI IMPRIMI TODAS AS INFORMÇÕES DA CARTA 1 


     printf("\n=== Carta 2 ===\n");
    printf("Estado:%s\n" , estado2);
    printf("Codigo:%s\n" , Código2);
    printf("Cidade:%s\n" , cidade2);
    printf("População:%d\n" , população2);
    printf("Area(km²):%f\n" , area2);
    printf("PIB:%f\n" , pib2);
    printf("Pontos turisticos:%d\n" , turismo2);

    // AQUI IMPRIMI TODAS AS INFORMÇÕES DA CARTA 1 

 
    

     
     





   return 0;

}

