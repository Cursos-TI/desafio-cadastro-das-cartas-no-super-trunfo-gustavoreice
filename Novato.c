#include <stdio.h>


int main() {
    
    //Introdução de variaveis:    
    
        int pontoturistico, codigo;
        float populacao, area, pib;
        char nome[20], estado[21]; 
         

    //Entrada de dados:

        

       printf("Qual o código da cidade resgistro no IBGE ?\n", codigo);
       scanf("%d", &codigo);

       printf("Qual o nome da cidade escolhida ?\n", nome);
       scanf("%s", &nome); 

       printf("Qual a sigla do estado da cidade escolhido ?\n", estado);
       scanf("%s", &estado); 

       printf("Qual o número de pontos turisticos da cidade escolhida ?\n", pontoturistico);
       scanf("%d", &pontoturistico);

       printf("Qual o total de habitantes registrado no IBGE da cidade escolhida ?\n", populacao);
       scanf("%f", &populacao);

       printf("Qual a área em KM² ?\n", area);
       scanf("%f", &area);

       printf("Qual o PIB da cidade registra no IBGE?\n", pib);
       scanf("%f", &pib);

        
    //Saida de Dados Recebidos:

        printf("Estado: %s\n", estado);
        printf("Cidade: %s\n", nome);
        printf("Código do Município: %d\n", codigo);
        printf("Habitante: %.3f\n", populacao);
        printf("Área: %.3fkm²\n", area);
        printf("PIB : %.2f R$\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);

    return 0;
}