#include <stdio.h>

int main() {

    // Introdução de variáveis:
    int pontoturistico1 = 7, pontoturistico2 = 20, atributo;
    unsigned int populacao1 = 386984, populacao2 = 316473;
    double area1 = 34970, pib1 = 48000000, area2 = 65701, pib2 = 58000000;
    double capita1 = 16909, capita2 = 207460, poder1 = 48427682, poder2 = 58584838;
    double densidade1 = 11201, densidade2 = 4816;
    char cidade1[12] = "Carapicuiba";
    char estado1[2] = "A";
    char codigo1[4] = "A01";
    char cidade2[8] = "Barueri";
    char estado2[2] = "B";
    char codigo2[4] = "B01";

    // Menu de Seleção:
    printf("### Comparação de Atributos ###\n\n");
    printf("Selecione um Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo);

    // Caixa de armazenamento de informações
    switch (atributo) {
        case 1:
            printf("\nAtributo Selecionado: População\n");
            printf("Carta 1 - %s (%s): %u\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %u\n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);}
            else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);}
            break;

        case 2:
            printf("\nAtributo Selecionado: Área\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
            if (area1 > area2){
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);}
            else {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);}
            break;

        case 3:
            printf("\nAtributo Selecionado: PIB\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
            if (pib1 > pib2){
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);}
            else{
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);}
            break;

        case 4:
            printf("\nAtributo Selecionado: Pontos Turísticos\n");
            printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontoturistico1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontoturistico2);
            if (pontoturistico1 > pontoturistico2){
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);}
            else{
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);}
            break;

        case 5:
            printf("\nAtributo Selecionado: Densidade Populacional\n"); //Vence a cartar com a menor densidade.
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2){
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1); }
            else{
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);}
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("\nComparação Finalizada!\n");
    return 0;
}