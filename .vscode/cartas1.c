#include <stdio.h>

int main(){
/*
 * Programa: Exibição de Cartas com Dados de Cidades
 * Descrição: Imprime informações fixas de duas cartas contendo
 * estado, código, nome da cidade, população, área (km²),
 * PIB (em bilhões) e número de pontos turísticos.
 */
    //iniciando carta 1

    //informações carta1
int populacao1 = 12345600, pontosturisticos1 = 60;
float pib1 = 300.500 , area1 = 1424.16 ;
char estado1 = 'A' ;
char codigodacarta1[20] = "A01", cidade1[20] = "Recife";

//carta 1
printf("Carta 1: \n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigodacarta1);
printf("Nome Da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Pontos Turisticos: %d\n", pontosturisticos1);
printf("\n");
//finalizada carta 1 ;)

//iniciando carta 2

//informações carta 2
 int populacao2 = 1278900, pontosturisticos2 = 40;
float pib2 = 200.300 , area2 = 1784.10 ;
char estado2 = 'B' ;
char codigodacarta2[20] = "B02", cidade2[20] = "Paulista";

//carta2
printf("Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigodacarta2);
printf("Nome Da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Pontos Turisticos: %d\n", pontosturisticos2);

return 0;
}