#include <stdio.h>

int main(){
    printf("Super Trunfo - Países\n");
   printf("Cartas 1 e 2\n");
    
//CARTA 1 - OSASCO

    char Estado = 'A';
    char codigo_da_carta[4] = "A01";
    char cidade[30] = "Osasco";
    int populacao = 720000;
    float kmq = 64.954;
    float pib = 86.1;
    int pt = 15;

// CARTA 2 - SÃO FÉLIX DO XINGU

    char estado = 'H';
    char codigodacarta[4] = "H03";
    char cidade2[30] = "São Félix Do Xingu";
    int populacao2 = 65000;
    float kmq2 = 84.212;
    float pib2 = 2.009;
    int pt2 = 3;

//Apresentação das cartas

    printf("Carta número 1\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População Total: %d mil habitantes\n", populacao);
    printf("Área em Km²: %.3f quilômetros quadrados\n", kmq);
    printf("PIB: %.1f bilhão de reais\n", pib);
    printf("Pontos Turísticos: %d pontos maravilhosos\n", pt);

//CARTA DE SÃO FÉLIX DO XINGU

    printf("Carta número 2\n");
    printf("Estado: %c\n",estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Cidade: %s\n", cidade2);
    printf("População Total: %d mil habitantes\n", populacao2);
    printf("Área em Km²: %.3f quilômetros quadrados\n", kmq2);
    printf("PIB: %.1f bilhão de reais\n", pib2);
    printf("Pontos Turísticos: %d pontos maravilhosos\n", pt2);
    
    
    return 0;
}   