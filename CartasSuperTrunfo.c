#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        int pontoturistico, codigo;
        float populacao ;
        float area ;
        float pib ;
        char nome[20]; 

       printf("Qual o código da cidade resgistro no IBGE ?\n", codigo);
       scanf("%d", &codigo);

       printf("Qual o nome da cidade escolhida?\n", nome);
       scanf("%s", &nome); 

       printf("Qual o número de pontos turisticos da cidade escolhida?\n", pontoturistico);
       scanf("%d", &pontoturistico);

       printf("Qual o total de habitantes registrado no IBGE da cidade escolhida ?\n", populacao);
       scanf("%f", &populacao);

       printf("Qual a área de KM²?\n", area);
       scanf("%f", &area);

       printf("Qual o PIB per capita registra no IBGE?\n", pib);
       scanf("%f", &pib);

        printf("Cidade: %s\n", nome);
        printf("Código do Município: %d\n", codigo);
        printf("Habitante: %.3f\n", populacao);
        printf("Área: %.3fkm²\n", area);
        printf("PIB per capita: %.3f R$\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);
  

    return 0;
}
