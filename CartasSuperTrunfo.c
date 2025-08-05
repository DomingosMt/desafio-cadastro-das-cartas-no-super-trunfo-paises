#include <stdio.h>

int main() {

    //Desafio de Curso - Super Trunfo de Países!
    
    //Início: Criar e dividir variáveis
    
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nomecidade1[20], nomecidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int NumerodePontosTuristicos1, NumerodePontosTuristicos2;

    
    printf("Jogo de Cartas Super Trunfo!\n\n");
    printf("Carta 1\n\n");
    
    //1ª parte: Obter dados da primeira carta.

    printf("Digite o estado: ");
    scanf("%c", &estado1);

    printf("Digite o código: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomecidade1);
    //O nome da cidade precisa ser digitado sem espaços, pois por motivos acadêmicos, não estou usando strings e arrays.

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NumerodePontosTuristicos1);

    // 2ª parte: Exibir dados da primeira carta.

    printf("Carta1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos1);

    //3ª parte: Obter dados da segunda carta.

    printf("Carta 2: \n\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomecidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NumerodePontosTuristicos2);

    // 4ª parte: Exibir dados da segunda carta.

    printf("Carta2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos2);

    //Fim do Exercício!!

    return 0;
}