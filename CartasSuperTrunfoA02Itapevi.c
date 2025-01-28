#include <stdio.h>

    
        int main(){
             /*Carta A02 referência cidade de Itapevi SP*/
        int pontoturistico = 15;
        float populacao = 232.297;
        float area = 82.659;
        float pib = 52.656;
        char nome[20] = "Itapevi"; 

       

        printf("Nome da cidade: %s\n", nome);
        printf("Número de habitante: %.3f\n", populacao);
        printf("Área: %.3fkm²\n", area);
        printf("PIB per capita: %.3f R$\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);

        return 0;
        }