#include <stdio.h>

//desafio das cartas

int main() {

int POPULACAO1, PONTOS1, POPULACAO2, PONTOS2 ;
float PIB1, AREA1, PIB2, AREA2;
char CODIGO1[5], CIDADE1[20], ESTADO1[50], CODIGO2[5], CIDADE2[20], ESTADO2[50];


//ESTADO
printf("Digite o estado: ");
scanf("%c", ESTADO1);
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

printf("carta 1.\n");
printf("ESTADO: %c\n" ,ESTADO1);
printf("CIDADE: %s\n" ,CIDADE1);
printf("CODIGO: %s\n" ,CODIGO1);
printf("PIB: %.2f\n" ,PIB1);
printf("AREA: %.2fkm2\n" ,AREA1);
printf("POPULACAO: %d\n" ,POPULACAO1);
printf("PONTOS TURISTICOS: %d\n" ,PONTOS1);




return 0;



};