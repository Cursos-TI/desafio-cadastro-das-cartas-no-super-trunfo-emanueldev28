#include <stdio.h>

//desafio das cartas
//dados carta 1

int main() {

int POPULACAO1, PONTOS1, POPULACAO2, PONTOS2 ;
float PIB1, AREA1, PIB2, AREA2;
char CODIGO1[5], CIDADE1[20], ESTADO1[5], CODIGO2[5], CIDADE2[20], ESTADO2[5];


//ESTADO
printf("Digite o estado: ");
scanf(" %10s", ESTADO1);
//CIDADE
printf("Digite o nome da cidade: ");
scanf("%s", CIDADE1);
//CODIGO DA CARTA
printf("Digite o codigo: ");
scanf("%s", CODIGO1);
//PIB
printf("Digite o PIB: ");
scanf("%f", &PIB1);
//AREA
printf("Digite a area: ");
scanf("%f", &AREA1);
//POPULACAO
printf("Digite a populacao: ");
scanf("%d", &POPULACAO1);
//PONTOS TURISTICOS
printf("Digite os pontos turisticos:");
scanf("%d", &PONTOS1);


//impressoes carta 1


printf("carta 1.\n");
printf("ESTADO:%s\n" ,ESTADO1);
printf("CIDADE: %s\n" ,CIDADE1);
printf("CODIGO: %s\n" ,CODIGO1);
printf("PIB: %.2f\n" ,PIB1);
printf("AREA: %.2f km2\n" ,AREA1);
printf("POPULACAO: %d\n" ,POPULACAO1);
printf("PONTOS TURISTICOS: %d\n" ,PONTOS1);


//carta 2


//ESTADO 2
printf("Digite o estado: ");
scanf(" %10s", ESTADO2);
//CIDADE 2
printf("Digite a cidade: ");
scanf("%s", CIDADE2);
//CODIGO 2
printf("Digite o codigo: ");
scanf("%s", CODIGO2);
//PIB 2
printf("Digite o PIB: ");
scanf("%f", &PIB2);
//AREA 2
printf("Digite a area: ");
scanf("%f", &AREA2);
//POPULACAO 2
printf("Digite a populacao: ");
scanf("%d", &POPULACAO2);
//PONTOS TURISTICOS 2
printf("Digite os pontos turisticos: ");
scanf(" %d", &PONTOS2);

//impressoes carta 2


printf("Carta 2\n");
printf("Estado:%s\n", ESTADO2);
printf("Cidade: %s\n", CIDADE2);
printf("Codigo: %s\n", CODIGO2);
printf("PIB: %.2f\n", PIB2);
printf("Area: %.2f km2\n", AREA2);
printf("Populacao: %d\n", POPULACAO2);
printf("Pontos Turisticos: %d\n", PONTOS2);

//Carta 01 vencedora devido aos valores justificados


//cartas finalizadas

return 0;



}