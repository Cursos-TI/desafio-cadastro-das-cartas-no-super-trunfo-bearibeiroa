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
    int numPontoTuristico;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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
    scanf("%d", &numPontoTuristico);


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", area);
    printf("Número de Pontos Turísticos: %d\n\n", numPontoTuristico);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
