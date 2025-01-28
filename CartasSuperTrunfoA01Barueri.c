#include <stdio.h>

    int main(){

        /*Carta A01 referência cidade de Barueri SP*/
        int pontoturistico = 15;
        float populacao = 316.473;
        float area = 65.701;
        float pib = 207.460;
        char nome[20] = "Barueri"; 

       

        printf("Nome da cidade: %s\n", nome);
        printf("Número de habitante: %.3f\n", populacao);
        printf("Área: %.3fkm²\n", area);
        printf("PIB per capita: %.3f\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);

        return 0;
        }

       