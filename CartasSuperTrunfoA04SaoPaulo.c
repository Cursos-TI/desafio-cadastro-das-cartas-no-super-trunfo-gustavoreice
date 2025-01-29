#include <stdio.h>

    
        int main(){
             /*Carta A03 referência cidade de São Paulo SP*/
        int pontoturistico = 30;
        float populacao = 11.451;
        float area = 1.521;
        float pib = 66.872;
        char nome[20] = "São Paulo"; 

       

        printf("Cidade: %s\n", nome);
        printf("Habitante: %.3f Milhões\n", populacao);
        printf("Área: %.3fkm²\n", area);
        printf("PIB per capita: %.3f R$\n", pib);
        printf("Número de pontos turísticos: %d\n", pontoturistico);

        return 0;
        }