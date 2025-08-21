#include <stdio.h>

int main(){

    //Variaveis Carta 1

    int pop, tur;
    float area, pib, densidade, pib_per_capita;
    char estado, codigo[4], cidade[30];

    //Variaveis Carta 2

    int pop2, tur2;
    float area2, pib2, densidade2, pib_per_capita2;
    char estado2, codigo2[4], cidade2[30];

    //Receber os dados de cadastro da Carta 1

    printf("Esta na hora de inserir os dados de suas duas primeiras cartas do Super Trunfo.\n");
    printf("\n");
    printf("Carta 01\n");
    printf("\n");
    printf("Digite uma letra de 'A' a 'H' que representará seu primeiro Estado: ");
    scanf(" %c", &estado);
    printf("Digite a letra de seu estado seguida de um numero de '01' a '04' para ser seu código de carta: ");
    scanf("%3s", &codigo);
    printf("Digite o nome da cidade: ");
    scanf("%29s", &cidade);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &pop);
    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &tur);
    printf("\n");
    printf("Calculando Densidade demografica e PIB per capita...\n");
    printf("\n");
    densidade = (pop/area);
    pib_per_capita = (pib/pop);

    //Fim de registro da Carta 1

    printf("Otimo, Carta 01 registrada.\n");
    printf("\n");

    //Receber os dados de cadastro da Carta 2

    printf("Carta 02\n");
    printf("\n");
    printf("Digite uma letra de 'A' a 'H' que representará seu primeiro Estado: ");
    scanf(" %c", &estado2);
    printf("Digite a letra de seu estado seguida de um numero de '01' a '04' para ser seu código de carta: ");
    scanf("%3s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%29s", &cidade2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &pop2);
    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &tur2);
    printf("\n");
    printf("Calculando Densidade demografica e PIB per capita...\n");
    printf("\n");
    densidade2 = (pop2/area2);
    pib_per_capita2 = (pib2/pop2);

    //Fim de registro da Carta 2

    printf("Otimo, Carta 02 registrada.\n");
    printf("\n");

    //Informacoes Carta 1
    printf("Aqui estao as informacoes detalhadas sobre as duas cartas registradas: \n");
    printf("\n");
    printf("Carta 01: \n");
    printf("\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", pop);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Pontos Turisticos: %d\n", tur);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_per_capita);

    //Fim Informacoes Carta 1

    //Informacoes Carta 2

    printf("\n");
    printf("Carta 02: \n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", tur2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    return 0;
}