#include <stdio.h>

    
        int main(){
             /*Carta A03 referência cidade de Limeira SP*/
        int pontoturistico = 15;
        float populacao = 291.869;
        float area = 580.711;
        float pib = 51.678;
        char nome[20] = "Limeira"; 

       

        printf("Nome da cidade: %s\n", nome);
        printf("Número de habitante: %.3f\n", populacao);
        printf("Área: %.3fkm²\n", area);
        printf("PIB per capita: %.3f R$\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);

        return 0;
        }