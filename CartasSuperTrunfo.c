#include <stdio.h>

int main() {

    //Desafio de Curso - Super Trunfo de Países!
    
    //Início: Criar e dividir variáveis
    
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nomecidade1[20], nomecidade2[20];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int NumerodePontosTuristicos1, NumerodePontosTuristicos2;
    float densidadepopul1, densidadepopul2;
    float pibpercapita1, pibpercapita2;
    float SuperPoder1, SuperPoder2;

    
    printf("*** Jogo de Cartas Super Trunfo! ***\n");
    printf("Bem-vindo ao Jogo de Cartas Super Trunfo!!\n\n");
    printf("Carta 1\n\n");
    
    //1ª parte: Obter dados da primeira carta.

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf(" %19[^\n]", nomecidade1);
  
    printf("Digite a população: ");
    scanf("%u", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NumerodePontosTuristicos1);

    //Cálculo da Densidade Populacional da primeira carta:
        densidadepopul1 = (float) populacao1 / area1;

    //Cálculo do PIB per Capita da primeira carta:
        pibpercapita1 = (PIB1 * 1000000000.0f) / populacao1;

    // 2ª parte: Exibir dados da primeira carta.

    printf("Carta1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopul1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);


    //3ª parte: Obter dados da segunda carta.


    printf("Carta 2: \n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf(" %19[^\n]", nomecidade2);

    printf("Digite a população: ");
    scanf("%u", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NumerodePontosTuristicos2);

     //Cálculo da Densidade Populacional da segunda carta:
        densidadepopul2 = (float) populacao2 / area2;

    //Cálculo do PIB per Capita da segunda carta:
        pibpercapita2 = (PIB2 * 1000000000.0f) / populacao2;

    // 4ª parte: Exibir dados da segunda carta.

    printf("Carta2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopul2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);


    //Cálculo do Super Poder das cartas

    printf("** Cálculo do Super Poder **\n\n");

    //Atribuição de inverso da Densidade populacional 1
    densidadepopul1 = 1.0f / densidadepopul1;

    printf("* Carta 1 *\n");
    SuperPoder1 = populacao1 + area1 + (PIB1 * 1000000000.0f) + (float) NumerodePontosTuristicos1 + pibpercapita1 + densidadepopul1;

        printf("O valor do SuperPoder da Carta 1 é: %.2f\n\n", SuperPoder1);


    //Atribuição de inverso da Densidade populacional 2
    densidadepopul2 = 1.0f / densidadepopul2;

    printf("* Carta 2 *\n");
    SuperPoder2 = populacao2 + area2 + (PIB2 * 1000000000.0f) + (float) NumerodePontosTuristicos2 + pibpercapita2 + densidadepopul2;

        printf("O valor do SuperPoder da Carta 2 é: %.2f\n\n", SuperPoder2);


    //Comparação das Cartas

    printf("*** Comparação das Cartas: ***\n\n");
     
    printf("População: Carta 1 Venceu\n", populacao1 > populacao2);
    printf("Área: Carta 1 Venceu\n", area1 > area2);
    printf("PIB: Carta 1 Venceu\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 Venceu\n", NumerodePontosTuristicos1 > NumerodePontosTuristicos2);
    printf("Densidade Populacional: Carta 2 Venceu\n", densidadepopul1 > densidadepopul2);
    printf("PIB per capita: Carta 1 Venceu\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 Venceu\n", SuperPoder1 < SuperPoder2);

    
    //Fim do Exercício!!

    return 0;
}