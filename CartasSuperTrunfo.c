#include <stdio.h>


int main() {
    unsigned long int população1, população2;
    float area1;
    float pib1;
    int pontos1;
    float area2;
    float pib2;
    int pontos2;
    char nome1 [50];
    char nome2 [50];



    printf("Digite o nome da cidade >1< \n");
    scanf("%s", nome1);
    printf("Digite o numero da população da cidade: \n");
    scanf("%lu", &população1);
    printf("Digite area da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos1);




    printf("Digite o nome da cidade >2<");
    scanf("%s", nome2);
    printf("Digite o numero da população da cidade: \n");
    scanf("%lu", &população2);
    printf("Digite area da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);

    float densidade1 = (float)população1 / area1;
    float pibpercapital1 = pib1 / população1;


    float densidade2 = (float)população2 / area2;
    float pibpercapital2 = pib2 / população2;





    printf(">>>carta-1<<<\n");
    printf("NOME DA CIDADE: %s\n", nome1);
    printf("Numero da população da cidade: %lu\n", população1);
    printf("AREA EM km² da cidade: %.2f\n", area1);
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Numero de pontos turisticos da cidade: %d\n", pontos1);
    printf("Densiadade Populacinal: %.2f\n", densidade1);
    printf("PIB per Capital: %.2f\n", pibpercapital1);
   

    printf(">>>carta-2<<<\n");
    printf("NOME DA CIDADE: %s\n", nome2);
    printf("Numero da população da cidade: %lu\n", população2);
    printf("AREA EM km² da cidade: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Numero de pontos turisticos da cidade: %d\n", pontos2);
    printf("Densiadade Populacinal: %.2f\n", densidade2);
    printf("PIB per Capital: %.2f\n", pibpercapital2);

    printf(">>>COMPARAÇÃO DAS CARTAS<<<\n");
    printf("População:  Carta %d vence\n", (população1 > população2) ? 1 : 2);
    printf("AREA: Carta %d vence\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d vence\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d vence\n", (pontos1 > pontos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d vence\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d vence\n", (pibpercapital1 > pibpercapital2) ? 1 : 2);


    float superPoder1 = população1 + area1 + densidade1 + pibpercapital1;
    
    float superPoder2 = população2 + area2 + densidade2 + pibpercapital2;


    printf("\n>>> Super Poder <<<\n");
    printf("Super Poder Carta 1: %.2f \n", superPoder1);
    printf("Super Poder Carta 2: %.2f \n", superPoder2);
    printf("CARTA VENCEDORA: Carta %d vence\n", (superPoder1 > superPoder2) ? 1 : 2);
    


   
    
    

    











    return 0;



}
