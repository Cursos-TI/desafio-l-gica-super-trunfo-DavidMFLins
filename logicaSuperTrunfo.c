#include <stdio.h> //incluindo biblioteca
#include <time.h> //Nova biblioteca

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
    printf("\n\n");

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

    // Declarando variaveis para guardar os valores que o jogador escolher
    int escolha1, escolha2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    // primeiro menu
    printf("\n--- MENU DE COMBATE 1 ---\n");
    printf("Escolha o primo atributo:\n");
    printf("1. Populacao\n");
    printf("2. AreaKM\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha1);
    printf("\n");

    // Lógica do atributo 1
    switch (escolha1) {
        case 1:
            valor1_carta1 = (float)populacao1; 
            valor1_carta2 = (float)populacao2;
            printf("Atributo 1: Populacao\n");
            printf("Valores -> Carta 1: %lu | Carta 2: %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) { printf("-> Carta 1 venceu no Atributo 1!\n"); }
            else if (populacao1 < populacao2) { printf("-> Carta 2 venceu no Atributo 1!\n"); }
            else { printf("-> Empate no Atributo 1!\n"); }
            break;
        case 2:
            valor1_carta1 = areakm1; 
            valor1_carta2 = areakm2;
            printf("Atributo 1: AreaKM\n");
            printf("Valores -> Carta 1: %.2f | Carta 2: %.2f\n", areakm1, areakm2);
            if (areakm1 > areakm2) { printf("-> Carta 1 venceu no Atributo 1!\n"); }
            else if (areakm1 < areakm2) { printf("-> Carta 2 venceu no Atributo 1!\n"); }
            else { printf("-> Empate no Atributo 1!\n"); }
            break;
        case 3:
            valor1_carta1 = pib1; 
            valor1_carta2 = pib2;
            printf("Atributo 1: PIB\n");
            printf("Valores -> Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
            if (pib1 > pib2) { printf("-> Carta 1 venceu no Atributo 1!\n"); }
            else if (pib1 < pib2) { printf("-> Carta 2 venceu no Atributo 1!\n"); }
            else { printf("-> Empate no Atributo 1!\n"); }
            break;
        case 4:
            valor1_carta1 = (float)pontosturisticos1; 
            valor1_carta2 = (float)pontosturisticos2;
            printf("Atributo 1: Pontos Turisticos\n");
            printf("Valores -> Carta 1: %d | Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) { printf("-> Carta 1 venceu no Atributo 1!\n"); }
            else if (pontosturisticos1 < pontosturisticos2) { printf("-> Carta 2 venceu no Atributo 1!\n"); }
            else { printf("-> Empate no Atributo 1!\n"); }
            break;
        case 5:
            valor1_carta1 = densidadepop1; 
            valor1_carta2 = densidadepop2;
            printf("Atributo 1: Densidade Demografica (Regra: Menor Vence)\n");
            printf("Valores -> Carta 1: %.2f | Carta 2: %.2f\n", densidadepop1, densidadepop2);
            if (densidadepop1 < densidadepop2) { printf("-> Carta 1 venceu no Atributo 1!\n"); }
            else if (densidadepop1 > densidadepop2) { printf("-> Carta 2 venceu no Atributo 1!\n"); }
            else { printf("-> Empate no Atributo 1!\n"); }
            break;
        default:
            printf("Opcao invalida!\n");
            valor1_carta1 = 0; valor1_carta2 = 0;
            break;
    }

    // Usamos ifs simples para NÃO mostrar a opçao que ele já digitou na escolha1
    printf("\n--- MENU DE COMBATE 2 ---\n");
    printf("Escolha o secondo atributo:\n");
    if (escolha1 != 1) { printf("1. Populacao\n"); }
    if (escolha1 != 2) { printf("2. AreaKM\n"); }
    if (escolha1 != 3) { printf("3. PIB\n"); }
    if (escolha1 != 4) { printf("4. Pontos turisticos\n"); }
    if (escolha1 != 5) { printf("5. Densidade demografica\n"); }
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha2);
    printf("\n");

    // se o jogador tentar digitar o mesmo numero
    if (escolha1 == escolha2) {
        printf("Você não pode escolher o mesmo atributo duas vezes! Fim do jogo.\n");
    } else {
        // Lógica do atributo 2
        switch (escolha2) {
            case 1:
                valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2;
                printf("Atributo 2: Populacao\n");
                printf("Valores -> Carta 1: %lu | Carta 2: %lu\n", populacao1, populacao2);
                if (populacao1 > populacao2) { printf("-> Carta 1 venceu no Atributo 2!\n"); }
                else if (populacao1 < populacao2) { printf("-> Carta 2 venceu no Atributo 2!\n"); }
                else { printf("-> Empate no Atributo 2!\n"); }
                break;
            case 2:
                valor2_carta1 = areakm1; valor2_carta2 = areakm2;
                printf("Atributo 2: AreaKM\n");
                printf("Valores -> Carta 1: %.2f | Carta 2: %.2f\n", areakm1, areakm2);
                if (areakm1 > areakm2) { printf("-> Carta 1 venceu no Atributo 2!\n"); }
                else if (areakm1 < areakm2) { printf("-> Carta 2 venceu no Atributo 2!\n"); }
                else { printf("-> Empate no Atributo 2!\n"); }
                break;
            case 3:
                valor2_carta1 = pib1; valor2_carta2 = pib2;
                printf("Atributo 2: PIB\n");
                printf("Valores -> Carta 1: %.2f | Carta 2: %.2f\n", pib1, pib2);
                if (pib1 > pib2) { printf("-> Carta 1 venceu no Atributo 2!\n"); }
                else if (pib1 < pib2) { printf("-> Carta 2 venceu no Atributo 2!\n"); }
                else { printf("-> Empate no Atributo 2!\n"); }
                break;
            case 4:
                valor2_carta1 = (float)pontosturisticos1; valor2_carta2 = (float)pontosturisticos2;
                printf("Atributo 2: Pontos Turisticos\n");
                printf("Valores -> Carta 1: %d | Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
                if (pontosturisticos1 > pontosturisticos2) { printf("-> Carta 1 venceu no Atributo 2!\n"); }
                else if (pontosturisticos1 < pontosturisticos2) { printf("-> Carta 2 venceu no Atributo 2!\n"); }
                else { printf("-> Empate no Atributo 2!\n"); }
                break;
            case 5:
                valor2_carta1 = densidadepop1; valor2_carta2 = densidadepop2;
                printf("Atributo 2: Densidade Demografica (Regra: Menor Vence)\n");
                printf("Valores -> Carta 1: %.2f | Carta 2: %.2f\n", densidadepop1, densidadepop2);
                if (densidadepop1 < densidadepop2) { printf("-> Carta 1 venceu no Atributo 2!\n"); }
                else if (densidadepop1 > densidadepop2) { printf("-> Carta 2 venceu no Atributo 2!\n"); }
                else { printf("-> Empate no Atributo 2!\n"); }
                break;
            default:
                printf("Opcao invalida!\n");
                valor2_carta1 = 0; valor2_carta2 = 0;
                break;
        }

        // calculo das somas
        float soma_carta1 = valor1_carta1 + valor2_carta1;
        float soma_carta2 = valor1_carta2 + valor2_carta2;

        printf("\n--- RESULTADO FINAL ---\n");
        
        // exibindo atributos que foram escolhidos
        printf("Atributos comparados: ");
        switch(escolha1) {
            case 1: printf("Populacao"); break;
            case 2: printf("AreaKM"); break;
            case 3: printf("PIB"); break;
            case 4: printf("Pontos Turisticos"); break;
            case 5: printf("Densidade Demografica"); break;
        }
        printf(" e ");
        switch(escolha2) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("AreaKM\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turisticos\n"); break;
            case 5: printf("Densidade Demografica\n"); break;
        }

        // somas
        printf("Carta 1 (%s) -> Soma dos Atributos: %.2f\n", nomedacidade1, soma_carta1);
        printf("Carta 2 (%s) -> Soma dos Atributos: %.2f\n", nomedacidade2, soma_carta2);

        // operador ternario para vencedor
        printf("\n=> VENCEDOR DA RODADA: ");
        
        // ternarios
        (soma_carta1 == soma_carta2) ? printf("EMPATE!\n") : 
        (soma_carta1 > soma_carta2)  ? printf("CARTA 1 (%s)\n", nomedacidade1) : printf("CARTA 2 (%s)\n", nomedacidade2);

    }

    printf ("\n\n"); //espaço final do codigo

    return 0; //Boa conduta

}