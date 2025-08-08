#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de Países.
// Neste projeto desenvolvido busquei deixar o mais simplificado e de fácil entendimento possível a leitura. 
// Teste Luís Fernando Lawall Haas.

int main(){
char estado1[3],estado2[3];
char código1[5],código2[5];
char cidade1[40],cidade2[40];
int população1,população2;
float área1,área2;
float PIB1,PIB2;
int pontos1,pontos2;

printf(" Carta 1 ");

printf("Digite a letra do estado entre A e H: \n");
scanf("%s" , &estado1);

printf("Digite o código da carta: \n");
scanf("%s" , &código1);

printf("Digite o nome da cidade: \n");
scanf("%s" , &cidade1);

printf("digite o número da população: \n");
scanf("%d" , &população1);

printf("Área em km²: \n");
scanf("%f" , &área1);

printf("Digite o valor do PIB anual: \n");
scanf("%f" , &PIB1);

printf("Número de pontos turísticos: \n");
scanf("%d" , &pontos1);

printf(" Carta 2 ");

printf("Digite a letra do estado entre A e H: \n");
scanf("%s" , &estado2);     

printf("Digite o código da carta: \n");
scanf("%s" , &código2);

printf("Digite o nome da cidade: \n");
scanf("%s" , &cidade2); 

printf("digite o número da população: \n");
scanf("%d" , &população2);

printf("Área em km²: \n");
scanf("%f" , &área2);   

printf("Digite o valor do PIB anual: \n");
scanf("%f" , &PIB2);

printf("Número de pontos turísticos: \n");
scanf("%d" , &pontos2);

printf("\n\n");
printf("CARTAS CADASTRADAS:\n");
printf("Carta 1:\n");
printf("ESTADO: %s\n" , estado1);
printf("PAÍS: %s\n" , código1);
printf("CÓDIGO: %s\n" , cidade1);   
printf("POPULAÇÃO(milhões): %d\n" , população1);
printf("ÁREA EM KM²: %f\n" , área1);
printf("PIB: %f\n" , PIB1);
printf("PONTOS TURÍSTICOS: %d\n", pontos1); 
printf("\n");

printf("Carta 2:\n");
printf("ESTADO: %S\n", estado2);
printf("PAÍS: %s\n", código2);
printf("CÓDIGO: %s\n", cidade2);
printf("POPULAÇÃO(milhões): %d\n", população2);
printf("ÁREA EM KM²: %f\n", área2);
printf("PIB: %f\n", PIB2);
printf("PONTOS TURÍSTICOS: %d" , pontos2);
printf("\n");




return 0;

}

