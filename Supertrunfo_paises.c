#include <stdio.h>

// Desafio Super Trunfo Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de Países.
// Neste projeto desenvolvido busquei deixar o mais simplificado e de fácil entendimento possível a leitura. 
// Teste Luís Fernando Lawall Haas.

int main(){
char estado1[3],estado2[3];
char codigo1[5],codigo2[5];
char pais1[40],pais2[40];
unsigned long int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int pontos1, pontos2;
float densidade1, densidade2;
float PIBperCapita1, PIBperCapita2;
float superpoder1, superpoder2;

    printf("\n\n");
    printf("CARTAS CADASTRADAS:\n");
    printf(" Carta 1 ");
    printf("\nDigite a letra do estado entre A e H: ");
    scanf("%s" , estado1);
    printf("Digite o código da carta: ");
    scanf("%s" , codigo1);
    printf("Digite o nome do País: ");
    scanf("%s" , pais1);
    printf("Digite a população: ");
    scanf("%lu" , &populacao1);
    printf("Área em km²: ");
    scanf("%f" , &area1);
    printf("Digite o PIB anual (em bilhões): ");
    scanf("%f" , &PIB1);
    printf("Número de pontos turísticos: ");
    scanf("%d" , &pontos1);

    densidade1 = populacao1 / area1;
    PIBperCapita1 = (PIB1 * 1000000000 ) / populacao1;
    superpoder1 = (float)populacao1 + area1 + PIB1 + pontos1 + PIBperCapita1 + (1.0f / densidade1);

    printf("\n Carta 2 ");
    printf("\nDigite a letra do estado entre A e H: ");
    scanf("%s" , estado2);     
    printf("Digite o código da carta: ");
    scanf("%s" , codigo2);
    printf("Digite o nome do País: ");
    scanf("%s", pais2); 
    printf("Digite a população: ");
    scanf("%lu" , &populacao2);
    printf("Área em km²: ");
    scanf("%f" , &area2);   
    printf("Digite o PIB anual (em bilhões): ");
    scanf("%f" , &PIB2);
    printf("Número de pontos turísticos: ");
    scanf("%d" , &pontos2);

    densidade2 = populacao2 / area2;
    PIBperCapita2 = (PIB2 * 1000000000 ) / populacao2;
    superpoder2 = (float)populacao2 + area2 + PIB2 + pontos2 + PIBperCapita2 + (1.0f / densidade2);

    printf("\n\n===== COMPARAÇÃO DE CARTAS =====\n");
    // Comparações individuais com empate
    if (populacao1 > populacao2) printf("População: %s venceu!\n", pais1);
    else if (populacao2 > populacao1) printf("População: %s venceu!\n", pais2);
    else printf("População: Empate!\n");

    if (area1 > area2) printf("Área: %s venceu!\n", pais1);
    else if (area2 > area1) printf("Área: %s venceu!\n", pais2);
    else printf("Área: Empate!\n");

    if (PIB1 > PIB2) printf("PIB: %s venceu!\n", pais1);
    else if (PIB2 > PIB1) printf("PIB: %s venceu!\n", pais2);
    else printf("PIB: Empate!\n");

    if (pontos1 > pontos2) printf("Pontos Turísticos: %s venceu!\n", pais1);
    else if (pontos2 > pontos1) printf("Pontos Turísticos: %s venceu!\n", pais2);
    else printf("Pontos Turísticos: Empate!\n");

    if (densidade1 < densidade2) printf("Densidade Populacional: %s venceu!\n", pais1);
    else if (densidade2 < densidade1) printf("Densidade Populacional: %s venceu!\n", pais2);
    else printf("Densidade Populacional: Empate!\n");

    if (PIBperCapita1 > PIBperCapita2) printf("PIB per Capita: %s venceu!\n", pais1);
    else if (PIBperCapita2 > PIBperCapita1) printf("PIB per Capita: %s venceu!\n", pais2);
    else printf("PIB per Capita: Empate!\n");

    if (superpoder1 > superpoder2) printf("Super Poder: %s venceu!\n", pais1);
    else if (superpoder2 > superpoder1) printf("Super Poder: %s venceu!\n", pais2);
    else printf("Super Poder: Empate!\n");

    // Soma final para determinar o grande vencedor
    float soma1 = (float)populacao1 + area1 + PIB1 + pontos1 + PIBperCapita1 + (1.0f / densidade1);
    float soma2 = (float)populacao2 + area2 + PIB2 + pontos2 + PIBperCapita2 + (1.0f / densidade2);

    printf("\n===== RESULTADO FINAL =====\n");
    printf("%s (Carta 1) Soma = %.2f\n", pais1, soma1);
    printf("%s (Carta 2) Soma = %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s (Carta 1)\n", pais1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s (Carta 2)\n", pais2);
    } else {
        printf("Resultado Final: Empate!\n");
    }

    return 0;
}



