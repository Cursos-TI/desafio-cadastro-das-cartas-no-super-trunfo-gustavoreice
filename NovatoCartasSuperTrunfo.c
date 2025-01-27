#include <stdio.h>

    int main(){
        int populacao, pontoturistico;
        float area, pib;
        char nome[20]; 

        printf("Qual o número de habitantes da cidade? \n");
        scanf("%d", &populacao);

        printf("Qual o  números de pontos turísticos da cidade escolhida? \n");
        scanf("%d", &pontoturistico);

        printf("Quantos M² tem a cidade? \n");
        scanf("%f", &area);

        printf("Qual a cotação do PIB da cidade? \n");
        scanf("%.2f", &pib);

        printf("Qual o nome da cidade? \n");
        scanf("%s", &nome);

        printf("Nome da cidade: %s\n", nome);
        printf("Número de habitante: %d\n", populacao);
        printf("km²: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);

        return 0;





    }