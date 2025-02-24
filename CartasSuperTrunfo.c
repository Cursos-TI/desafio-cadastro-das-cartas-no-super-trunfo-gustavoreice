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

    //Nivel Novato concluido 
    //Nivel Aventureiro Concluido

    //Definindo variaveis:    
    
    //Introdução de variaveis:    
    int pontoturistico1, pontoturistico2 ;
    unsigned int populacao1, populacao2 ;
    float  area1, pib1, area2, pib2, densidade1, densidade2, capita1, capita2, poder1, poder2;
    char cidade1[20], estado1[20], codigo1[10], cidade2[20], estado2[20], codigo2[10];  

//Entrada de dados Carta 01:

    printf("Qual o código da Carta ?\n", codigo1);
    scanf("%s", &codigo1);

    printf("Qual o estado escolhido ?\n", estado1);
    scanf("%s", &estado1);

    printf("Qual o nome da cidade escolhida ?\n", cidade1);
    scanf("%s", &cidade1); 

    printf("Qual o número de pontos turisticos da cidade escolhida ?\n", pontoturistico1);
    scanf("%d", &pontoturistico1);

    printf("Qual o total de habitantes registrado no IBGE da cidade escolhida ?\n", populacao1);
    scanf("%d", &populacao1);

    printf("Qual a área em KM² ?\n", area1);
    scanf("%f", &area1);

    printf("Qual o PIB da cidade registra no IBGE?\n", pib1);
    scanf("%f", &pib1);

//Entrada de dados carta 02:

    

    printf("Qual o código da Carta ?\n", codigo2);
    scanf("%s", &codigo2);

    printf("Qual o estado escolhido ?\n", estado2);
    scanf("%s", &estado2); 

    printf("Qual o nome da cidade escolhida ?\n", cidade2);
    scanf("%s", &cidade2); 

    printf("Qual o número de pontos turisticos da cidade escolhida ?\n", pontoturistico2);
    scanf("%d", &pontoturistico2);

    printf("Qual o total de habitantes registrado no IBGE da cidade escolhida ?\n", populacao2);
    scanf("%d", &populacao2);

    printf("Qual a área em KM² ?\n", area2);
    scanf("%f", &area2);

    printf("Qual o PIB da cidade registra no IBGE?\n", pib2);
    scanf("%f", &pib2); 

// Calculo das Cartas:

        // Carta 01:
     densidade1 =  (populacao1 / area1); 

     capita1 = (pib1 / populacao1);

     poder1 = (float)(populacao1 + area1 + pib1 + pontoturistico1 + capita1 - densidade1);

        // Carta 02:

     densidade2 =  (populacao2 / area2);
     
     capita2 = (pib2 / populacao2);

     poder2 = (float)(populacao2 + area2 + pib2 + pontoturistico2 + capita2 - densidade2);

    
 
//Saida de Dados Recebidos Carta 01:

    printf("***Carta 01***\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB : %.2f Milhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", capita1);
    

//Saida de Dados Recebidos Carta 01:

    printf("***Carta 02***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB : %.2f Milhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", capita2); 
    
// Resultado da Comparação entre cartas da cidade1 e cidade2:

    printf("***Comparação de Cartas***\n");    
    printf("População: Carta 1 venceu: (%d)\n", densidade1 > densidade2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoturistico1 > pontoturistico2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade2 < densidade1);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", capita1 > capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", poder1 > poder2); 

    return 0;
}
