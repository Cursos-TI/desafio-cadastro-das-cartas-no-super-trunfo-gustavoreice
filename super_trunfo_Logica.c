int main() {
    
    //Introdução de variaveis:    
        int pontoturistico1, pontoturistico2 ;
        unsigned int populacao1, populacao2 ;
        double  area1, pib1, area2, pib2, capita1, capita2, poder1, poder2;
        double densidade1 , densidade2;
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
        scanf("%lf", &area1);

        printf("Qual o PIB da cidade registra no IBGE?\n", pib1);
        scanf("%lf", &pib1);

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
        scanf("%u", &populacao2);

        printf("Qual a área em KM² ?\n", area2);
        scanf("%lf", &area2);

        printf("Qual o PIB da cidade registra no IBGE?\n", pib2);
        scanf("%lf", &pib2); 

    // Calculo das Cartas:

            // Carta 01:
         densidade1 =  populacao1 / area1; 

         capita1 = pib1 / populacao1;

         poder1 = populacao1 + area1 + pib1 + pontoturistico1 + capita1 - densidade1;

            // Carta 02:

         densidade2 =  populacao2 / area2;
         
         capita2 = pib2 / populacao2;

         poder2 = populacao2 + area2 + pib2 + pontoturistico2 + capita2 - densidade2;

        
     
    //Saida de Dados Recebidos Carta 01:

        printf("\n***Carta 01***\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %u\n", populacao1);
        printf("Área: %.2fkm²\n", area1);
        printf("PIB : %.2f Milhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontoturistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", poder1);
        
        

    //Saida de Dados Recebidos Carta 02:

        printf("\n***Carta 02***\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %u\n", populacao2);
        printf("Área: %.2fkm²\n", area2);
        printf("PIB : %.2f Milhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontoturistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", poder2);
        
    // Comparação entre cartas :

        // Atributo População:
        printf("\n***Comparação de Cartas***\n");
        printf("\nAtributo: População\n");
        printf("Carta 1 - %s (%s): %u\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %u\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

        // Atributo Área:
        printf("\nAtributo: Área\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

        // Atributo PIB:
        printf("\nAtributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

        // Atributo Pontos Turísticos:
        printf("\nAtributo: Números de pontos turísticos.\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontoturistico1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontoturistico2);
        if (pontoturistico1 > pontoturistico2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

        // Atributo Densidade Populacional:
        printf("\nAtributo: Densidade Populacional.\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

        // Atributo PIB Per capita:
        printf("\nAtributo: PIB Per capita.\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, capita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, capita2);
        if (capita1 > capita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

        // Atributo Super Poder:
        printf("\nAtributo: Super Poder.\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, poder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, poder2);
        if (poder1 > poder2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        
        
    return 0;
}