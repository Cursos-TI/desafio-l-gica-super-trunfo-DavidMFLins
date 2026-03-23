#include <stdio.h> //incluindo biblioteca

int main(){

    //Declarando variaveis cidade1
    char estado1[50]; 
    char codigocarta1[50]; 
    char nomedacidade1[50]; 
    unsigned long int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;
    float densidadepop1;
    float pibpercapita1;
    double superpoder1;

    //Declarando variaveis cidade2

    char estado2[50]; 
    char codigocarta2[50]; 
    char nomedacidade2[50]; 
    unsigned long int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;
    float densidadepop2;
    float pibpercapita2;
    double superpoder2;

    //Abertura do programa

    printf("  __  __                       _       \n");
    printf(" |  \\/  |                     | |      \n");
    printf(" | \\  / | __ _  ___ __ _ _   _| |_   _ \n");
    printf(" | |\\/| |/ _` |/ __/ _` | | | | | | | |\n");
    printf(" | |  | | (_| | (_| (_| | |_| | | |_| |\n");
    printf(" |_|  |_|\\__,_|\\___\\__,_|\\__,_|_|\\__, |\n");
    printf("                                  __/ |\n");
    printf("  SUPER TRUNFO                   |___/ \n");
    printf("----------------------------------------\n\n");

    //Obtendo resultados x1

    printf ("Digite o Estado1: \n");
    scanf  ("%s" , estado1); 
    printf ("Digite o Código da Carta1: \n");
    scanf  ("%s" , codigocarta1);
    printf ("Digite o Nome da Cidade1: \n");
    scanf  ("%s" , nomedacidade1);
    printf ("Digite a população1: \n");
    scanf  ("%lu" , &populacao1);
    printf ("Digite Área1 (em km²): \n");
    scanf  ("%f" , &areakm1);
    printf ("Digite o PIB1: \n");
    scanf  ("%f" , &pib1);
    printf ("Digite Número de Pontos Turísticos1: \n");
    scanf  ("%d" , &pontosturisticos1);
    printf("\n\n"); //espaço entre a inserção das duas cidades

    //Obtendo resultados 2

    printf ("Digite o Estado2: \n");
    scanf  ("%s" , estado2);
    printf ("Digite o Código da Carta2: \n");
    scanf  ("%s" , codigocarta2);
    printf ("Digite o Nome da Cidade2: \n");
    scanf  ("%s" , nomedacidade2);
    printf ("Digite a população2: \n");
    scanf  ("%lu" , &populacao2);
    printf ("Digite Área2 (em km²): \n");
    scanf  ("%f" , &areakm2);
    printf ("Digite o PIB2: \n");
    scanf  ("%f" , &pib2);
    printf ("Digite Número de Pontos Turísticos2: \n");
    scanf  ("%d" , &pontosturisticos2);

    //Calculo de PIB E Densidade Populacional cidade 1

    densidadepop1 = (float) ( populacao1 / areakm1);
    pibpercapita1 = (float) (pib1 / populacao1);

    //Calculo de PIB E Densidade Populacional cidade 2

    densidadepop2 = (float) ( populacao2 / areakm2);
    pibpercapita2 = (float) (pib2 / populacao2);

    //Calculo Super Poder1

    superpoder1 = (double) ((populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1) - (densidadepop1));

    //Calculo Super Poder2

    superpoder2 = (double) ((populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2) - (densidadepop2));

    // Exibindo resultados 1
    
    printf ("\n--- Dados da Carta 1 ---\n");
    printf ("Estado: %s\n" , estado1); 
    printf ("Código da Carta: %s\n" , codigocarta1);
    printf ("Nome da Cidade: %s\n" , nomedacidade1);
    printf ("População: %lu\n" , populacao1);
    printf ("Área: %f km²\n" , areakm1);
    printf ("PIB: %f\n" , pib1);
    printf ("A Densidade populacional é: %f\n" , densidadepop1);
    printf ("O PIN per capita é: %f\n" , pibpercapita1);
    printf ("O super poder é: %lf\n" , superpoder1);
    
    // Exibindo resultados 2
    
    printf ("\n--- Dados da Carta 2 ---\n");
    printf ("Estado: %s\n" , estado2);
    printf ("Código da Carta: %s\n" , codigocarta2);
    printf ("Nome da Cidade: %s\n" , nomedacidade2);
    printf ("População: %lu\n" , populacao2);
    printf ("Área: %f km²\n" , areakm2);
    printf ("PIB: %f\n" , pib2);
    printf ("Número de Pontos Turísticos: %d\n" , pontosturisticos2);
    printf ("A Densidade populacional é: %f\n" , densidadepop2);
    printf ("O PIB per capita é: %f\n" , pibpercapita2);
    printf ("O super poder é: %lf\n" , superpoder2);

    //Resultado das comparações com if-else
    
    printf("\nComparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomedacidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomedacidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf ("Resultado: Carta 1 (%s) venceu!\n\n" , nomedacidade1);
    } else {
        printf ("Resultado: Carta 2 (%s) venceu!\n\n" , nomedacidade2);
    }

    if (areakm1 > areakm2) {
        printf ("A Área de %s (%f) é maior que a de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, areakm1 , nomedacidade2, areakm2 , nomedacidade1);
    } else {
        printf ("A Área de %s (%f) é menor que a de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, areakm1 , nomedacidade2, areakm2 , nomedacidade2);
    }

    if (pib1 > pib2) {
        printf ("O PIB de %s (%f) é maior que o de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, pib1 , nomedacidade2, pib2 , nomedacidade1);
    } else {
        printf ("O PIB de %s (%f) é menor que o de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, pib1 , nomedacidade2, pib2 , nomedacidade2);
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf("O Número de Pontos Turísticos de %s (%d) é maior que o de %s (%d).\n%s Venceu!\n\n" , nomedacidade1, pontosturisticos1 , nomedacidade2, pontosturisticos2 , nomedacidade1);
    } else {
        printf("O Número de Pontos Turísticos de %s (%d) é menor que o de %s (%d).\n%s Venceu!\n\n" , nomedacidade1, pontosturisticos1 , nomedacidade2, pontosturisticos2 , nomedacidade2);
    }
    
    if (densidadepop1 < densidadepop2) {
        printf ("A Densidade populacional de %s (%f) é menor que a de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, densidadepop1 , nomedacidade2, densidadepop2 , nomedacidade1);
    } else {
        printf ("A Densidade populacional de %s (%f) é maior que a de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, densidadepop1 , nomedacidade2, densidadepop2 , nomedacidade2);
    }

    if (pibpercapita1 > pibpercapita2) {
        printf ("O PIB per capita de %s (%f) é maior que o de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, pibpercapita1 , nomedacidade2, pibpercapita2 , nomedacidade1);
    } else {
        printf ("O PIB per capita de %s (%f) é menor que o de %s (%f).\n%s Venceu!\n\n" , nomedacidade1, pibpercapita1 , nomedacidade2, pibpercapita2 , nomedacidade2);
    }

    if (superpoder1 > superpoder2) {
        printf ("O Super Poder de %s (%lf) é maior que o de %s (%lf).\n%s Venceu!\n\n" , nomedacidade1, superpoder1 , nomedacidade2, superpoder2 , nomedacidade1);
    } else {
        printf ("O Super Poder de %s (%lf) é menor que o de %s (%lf).\n%s Venceu!\n\n" , nomedacidade1, superpoder1 , nomedacidade2, superpoder2 , nomedacidade2);
    }

    printf ("\n\n"); //espaço final do codigo

    return 0; //Boa conduta
}