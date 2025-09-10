#include <stdio.h>

int main() {

    //Desafio de Curso - Super Trunfo de Países!
    
    //Início: Criar e dividir variáveis
    
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nomecidade1[20], nomecidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int atributo;
    int NumerodePontosTuristicos1, NumerodePontosTuristicos2;
    float densidadepopul1, densidadepopul2;
    float pibpercapita1, pibpercapita2;
    float SuperPoder1, SuperPoder2;

    
    printf("*** Jogo de Cartas Super Trunfo! ***\n");
    printf("Bem-vindo ao Jogo de Cartas Super Trunfo!!\n\n");
    printf("Carta 1\n\n");
    
    //1ª parte: Obter dados da primeira carta.

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %19[^\n]", nomecidade1);
  
    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
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
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopul1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);


    //3ª parte: Obter dados da segunda carta.


    printf("Carta 2: \n\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %19[^\n]", nomecidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
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
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopul2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);


    printf("** Comparação de Atributos **\n\n");
    //Escolha do atributo para comparar as cartas
    printf("*** Escolha do Atributo ***\n\n");
    printf("Escolha um dos seguintes atributos:\n");
    printf("1 - Nome do País\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade Populacional\n");
    scanf("%d", &atributo);

    //Menu Interativo para escolha do atributo
    switch (atributo)
    {
    case 1:
        printf("Você escolheu o atributo Nome do País.\n\n");
        break;
    case 2:
        printf("Você escolheu o atributo População.\n\n");
        break;
    case 3:
        printf("Você escolheu o atributo Área.\n\n");
        break;
    case 4:
        printf("Você escolheu o atributo PIB.\n\n");
        break;
    case 5:
        printf("Você escolheu o atributo Número de Pontos Turísticos.\n\n");
        break;
    case 6:
        printf("Você escolheu o atributo Densidade Populacional.\n\n");
        break;
    
    default:
        printf("Opção inválida.\n\n");
        break;
    }

    //LÓGICA DE COMPARAÇÃO DAS CARTAS
    if (atributo == 1)
    {
        printf("Comparação pelo Nome do País não é possível.\n");
    } else if (atributo == 2)
    {
        if (populacao1 > populacao2)
        {
            printf("Carta 1 é maior que Carta 2 em População.\n");
        } else if (populacao1 < populacao2)
        {
            printf("Carta 2 é maior que Carta 1 em População.\n");
        } else 
        {
            printf("As duas cartas são iguais em População.\n");
        }
    } else if (atributo == 3)
    {
        if (area1 > area2)
        {
            printf("Carta 1 é maior que Carta 2 em Área.\n");
        } else if (area1 < area2)
        {
            printf("Carta 2 é maior que Carta 1 em Área.\n");
        } else 
        {
            printf("As duas cartas são iguais em Área.\n");
        }
    } else if (atributo == 4)
    {
        if (PIB1 > PIB2)
        {
            printf("Carta 1 é maior que Carta 2 em PIB.\n");
        } else if (PIB1 < PIB2)
        {
            printf("Carta 2 é maior que Carta 1 em PIB.\n");
        } else 
        {
            printf("As duas cartas são iguais em PIB.\n");
        }
    } else if (atributo == 5)
    {
        if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2)
        {
            printf("Carta 1 é maior que Carta 2 em Número de Pontos Turísticos.\n");
        } else if (NumerodePontosTuristicos1 < NumerodePontosTuristicos2)
        {
            printf("Carta 2 é maior que Carta 1 em Número de Pontos Turísticos.\n");
        } else 
        {
            printf("As duas cartas são iguais em Número de Pontos Turísticos.\n");
        }
    } else if (atributo == 6)
    {
        if (densidadepopul1 < densidadepopul2)
        {
            printf("Carta 1 é menor que Carta 2 em Densidade Populacional.\n");
        } else if (densidadepopul1 > densidadepopul2)
        {
            printf("Carta 2 é menor que Carta 1 em Densidade Populacional.\n");
        } else 
        {
            printf("As duas cartas são iguais em Densidade Populacional.\n");
        }
    } else 
    {
        printf("Atributo inválido para comparação.\n");
    }

    // Exibição dos Resultados da Comparação
    printf("\n*** Exibição da Comparação ***\n\n");
    
    printf("** Carta 1: **\n\n");
    printf("Nome do países: %s\n", nomecidade1, nomecidade2);
    printf("Atributo selecionado: %d\n", atributo);

    printf("O valor atributo da carta 1 é: ");
    if (atributo == 1)
    {
        printf("Atributo Nome sem valor.\n");
    } else if (atributo == 2)
    {
        printf("%.2lu\n", populacao1);

    } else if (atributo == 3)
    {
        printf("%.2f\n", area1);

    } else if (atributo == 4)
    {
        printf("%.2f\n", PIB1);

    } else if (atributo == 5)
    {
        printf("%d\n", NumerodePontosTuristicos1);

    } else if (atributo == 6)
    {
        printf("%.2f\n", densidadepopul1);
    }

    printf("O valor atributo da carta 2 é: ");
    if (atributo == 1)
    {
        printf("Atributo Nome sem valor.\n");
    } else if (atributo == 2)
    {
        printf("%.2lu\n", populacao2);

    } else if (atributo == 3)
    {
        printf("%.2f\n", area2);

    } else if (atributo == 4)
    {
        printf("%.2f\n", PIB2);

    } else if (atributo == 5)
    {
        printf("%d\n", NumerodePontosTuristicos2);

    } else if (atributo == 6)
    {
        printf("%.2f\n", densidadepopul2);
    }

    

    // Cálculo do Super Poder das cartas

    // printf("** Cálculo do Super Poder **\n\n");

    // //Atribuição de inverso da Densidade populacional 1
    // densidadepopul1 = 1.0f / densidadepopul1;

    // if (atributo == 1)
    // {
    //     /* code */
    // }

    // //Cálculo do Super Poder da Carta 1
    
    // //Comparação das Cartas

    // printf("*** Comparação das Cartas: ***\n\n");
     
    //     printf("População: %d\n", populacao1 > populacao2); // 1 se C1 > C2, 0 caso contrário
    //     printf("Área: %d\n", area1 > area2);
    //     printf("PIB: %d\n", PIB1 > PIB2);
    //     printf("Pontos Turísticos: %d\n", NumerodePontosTuristicos1 > NumerodePontosTuristicos2);
    //     printf("PIB per capita: %d\n", pibpercapita1 > pibpercapita2);
    //     printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    //     // Para Densidade Populacional: "menor vence"
    //     printf("Densidade Populacional: %d\n\n", densidadepopul1 < densidadepopul2); // 1 se C1 < C2 (C1 tem menor densidade original, logo vence), 0 caso contrário

    // printf("*** Comparação de Atributos *** (Atributo Área)\n\n");

    // if (area1 > area2)
    // {
    //     printf("Carta 1 - São Paulo (SP): %.2f\n", area1);
    //     printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n", area2);
    //     printf("Resultado: Carta 1 (%s) venceu!)\n", nomecidade1);
    // } else {
    //     printf("Carta 1 - São Paulo (SP): %.2f\n", area1);
    //     printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n", area2);
    //     printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    // }
    
    //Fim do Exercício!!
    return 0;
}