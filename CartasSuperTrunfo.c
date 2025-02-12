#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Filipe

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char codigo_cidade[10], nome[50];
    int populacao, pontos_turisticos;
    float area;
    double pib;
    
    // Cadastro da cidade
    printf("Cadastro da cidade!\n");
    printf("Codigo da cidade: \n");
    scanf("%s", &codigo_cidade);
    
    printf("Nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Populacao: \n");
    scanf("%d", &populacao);
    
    printf("Area: \n");
    scanf("%f", &area);
    
    printf("PIB: \n");
    scanf("%lf", &pib);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    
    // Exibindo os dados cadastrados
    printf("\nDados da cidade cadastrada:\n");
    printf("Codigo: %s\n", codigo_cidade);
    printf("Nome: %s\n", nome);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2lf bilhoes\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    
    return 0;
}
