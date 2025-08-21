#include <stdio.h>

int main(){

    //Variaveis Carta 1

    long unsigned int pop;
    int tur;
    float area, pib, densidade, pib_per_capita, superpoder;
    char estado, codigo[4], cidade[30];

    //Variaveis Carta 2

    long unsigned int pop2;
    int tur2;
    float area2, pib2, densidade2, pib_per_capita2, superpoder2;
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
    scanf(" %lu", &pop);
    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &tur);
    printf("\n");
    printf("Calculando Densidade demografica e PIB per capita...\n");
    printf("\n");
    densidade = ((float)pop/area);
    pib_per_capita = (pib/(float)pop);
    superpoder = ((float)pop + area + pib + tur + pib_per_capita) - densidade;

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
    scanf(" %lu", &pop2);
    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &tur2);
    printf("\n");
    printf("Calculando Densidade demografica e PIB per capita...\n");
    printf("\n");
    densidade2 = ((float)pop2/area2);
    pib_per_capita2 = (pib2/(float)pop2);
    superpoder2 = ((float)pop2 + area2 + pib2 + tur2 + pib_per_capita2) - densidade2;

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
    printf("Populacao: %lu\n", pop);
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
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", tur2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    //Fim Informacoes Carta 2

    //Comparacao de Super Poderes
    printf("\n");
    printf("Comparando os Super Poderes das cartas...\n");
    printf("\n");
    printf("Comparação de Cartas:\n");
    printf("\n");
    printf("Populacao: Carta 1 venceu %d\n", (pop > pop2));
    printf("Area: Carta 1 venceu %d\n", (area > area2));
    printf("PIB: Carta 1 venceu %d\n", (pib > pib2));
    printf("Pontos Turisticos: Carta 1 venceu %d\n", (tur > tur2));
    printf("Densidade Populacional: Carta 2 venceu %d\n", (densidade > densidade2));
    printf("PIB per Capita: Carta 1 venceu %d\n", (pib_per_capita > pib_per_capita2));
    printf("Super Poder: Carta 1 venceu %d\n", (superpoder > superpoder2));


    return 0;
}