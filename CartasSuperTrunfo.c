#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Define variáveis para atributo das cidades da carta1.
    char estado = 'A';
    char codigocarta[10] = "A01";
    char nomecidade[30];
    int populacao; 
    float area; 
    float pib;
    int numpontoturistico;
    float densidadepop;
    float pibpercapita;
    
    // Define variáveis para atributo das cidades da carta2.
    char estado2 = 'B';
    char codigocarta2[10] = "B01";
    char nomecidade2[30];
    int populacao2; 
    float area2; 
    float pib2;
    int numpontoturistico2;
    float densidadepop2;
    float pibpercapita2;

    
    // Cadastro de Carta 1:

    printf("Cadastro Carta n.01\n\n");

    printf("Digite o nome da cidade:\n");
    scanf("%29s", nomecidade);

    printf("Defina o tamanho da população:\n");
    scanf("%d", &populacao);
    
    printf("Defina a área do estado:\n");
    scanf("%f", &area);

    printf("Defina o PIB estado:\n");
    scanf("%f", &pib);

    printf("Defina o número de pontos turísticos:\n");
    scanf("%d", &numpontoturistico);

    printf("\n");

    // Cadastro de Carta 2:

    printf("Cadastro Carta n.02\n\n");

    printf("Digite o nome da cidade:\n");
    scanf("%29s", nomecidade2);

    printf("Defina o tamanho da população:\n");
    scanf("%d", &populacao2);
    
    printf("Defina a área do estado:\n");
    scanf("%f", &area2);

    printf("Defina o PIB estado:\n");
    scanf("%f", &pib2);

    printf("Defina o número de pontos turísticos:\n");
    scanf("%d", &numpontoturistico2);

    // Cálculo de densidade populacional e PIB per Capita carta 1

    densidadepop = (float)populacao / area;
    pibpercapita =(pib * 1000000000) / populacao;;

    // Cálculo de densidade populacional e PIB per Capita carta 2
    densidadepop2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000)/populacao2;

    // Print de cartas cadastradas.

    printf("Cartas cadastradas: \n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numpontoturistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    
    printf("--------------------------------\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n ", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("\n");
    
    
    return 0;
}
