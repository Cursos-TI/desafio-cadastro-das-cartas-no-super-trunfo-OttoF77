#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //declaração de variáveis
    char c1_estado[2], c2_estado[2], c1_codigo[3], c2_codigo[3], c1_cidade[20], c2_cidade[20];
    int c1_populacao, c2_populacao, c1_ponto, c2_ponto;
    float c1_area, c2_area, c1_pib, c2_pib, c1_densidade, c2_densidade, c1_pib_per_capita, c2_pib_per_capita;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //solicita e recebe os dados inseridos pelo usuário
    printf("insira os dados da primeira carta: \n");

    printf("Estado:\n");
    scanf(" %s", c1_estado);

    printf("Codigo:\n");
    scanf("%s", c1_codigo);

    printf("Cidade:\n");
    scanf("%s", c1_cidade);

    printf("Populacao:\n");
    scanf("%d", &c1_populacao);

    printf("Area:\n");
    scanf("%f", &c1_area);

    printf("PIB:\n");
    scanf("%f", &c1_pib);

    printf("Ponto:\n");
    scanf("%d", &c1_ponto); 

    printf("\n\n");

    //solicita e recebe os dados da segunda carta
    printf("insira os dados da segunda carta:\n");

    printf("Estado:\n");
    scanf(" %s", c2_estado);

    printf("Codigo:\n");
    scanf("%s", c2_codigo);

    printf("Cidade:\n");
    scanf("%s", c2_cidade);

    printf("Populacao:\n");
    scanf("%d", &c2_populacao);

    printf("Area:\n");
    scanf("%f", &c2_area);

    printf("PIB:\n");
    scanf("%f", &c2_pib);

    printf("Ponto:\n");
    scanf("%d", &c2_ponto);

    printf("\n\n");

    //cálculo da densidade populacional e PIB per capita
    c1_densidade = (float) c1_populacao / c1_area;
    c2_densidade = (float) c2_populacao / c2_area;
    c1_pib_per_capita = (float) c1_pib * 1000000000 / c1_populacao;
    c2_pib_per_capita = (float) c2_pib * 1000000000 / c2_populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //imprime os dados das cartas
    printf("Carta 1: \n");
    printf("Estado: %s\n", c1_estado);
    printf("Codigo: %s\n", c1_codigo);
    printf("Cidade: %s\n", c1_cidade);
    printf("Populacao: %d\n", c1_populacao);
    printf("Area: %.2f km2\n", c1_area);
    printf("PIB: %.2f bilhões de reais\n", c1_pib);
    printf("Ponto: %d\n", c1_ponto);
    printf("Densidade: %.2f hab/km2\n", c1_densidade);
    printf("PIB per capita: %.2f reais\n", c1_pib_per_capita);

    printf("\n\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", c2_estado);
    printf("Codigo: %s\n", c2_codigo);
    printf("Cidade: %s\n", c2_cidade);
    printf("Populacao: %d\n", c2_populacao);
    printf("Area: %.2f km2\n", c2_area);
    printf("PIB: %.2f bilhões de reais\n", c2_pib);
    printf("Ponto: %d\n", c2_ponto);
    printf("Densidade: %.2f hab/km2\n", c2_densidade);
    printf("PIB per capita: %.2f reais\n", c2_pib_per_capita);


    return 0;
}
