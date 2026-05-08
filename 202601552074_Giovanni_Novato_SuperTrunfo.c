#include <stdio.h>

int main() {

    char ncarta[3];
    char ncarta2[3];
    char Estado;
    char Estado2;
    char cdc[20];
    char cdc2[20];
    char nome_cidade[15];
    char nome_cidade2[15];
    int Populacao;
    int Populacao2;
    float area;
    float area2;
    float PIB;
    float PIB2;
    int NPT;
    int NPT2;

    printf("Digite o numero da carta que sera criada: \n");
    scanf("%s", ncarta);

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite o codigo que sera atribuido a Carta:\n");
    scanf("%s", cdc);
    scanf("%*c");

    printf("Digite o nome da Cidade que sera adicionada: \n");
    fgets(nome_cidade,15, stdin);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &NPT);


printf("Prosseguindo para o cadastro da carta 2:\n \n");

    printf("Digite o numero da carta que sera criada: \n");
    scanf("%s", ncarta2);

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o codigo que sera atribuido a Carta:\n");
    scanf("%s", cdc2);

    printf("Digite o nome da Cidade que sera adicionada: \n");
    fgets(nome_cidade2,15, stdin);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &NPT2);

printf("Carta 1:\n \n");
   printf("Carta: %s\n", ncarta);
   printf("Estado:%c\n", Estado);
   printf("Codigo: %c%s\n", Estado, cdc);
   printf("Nome da cidade: %s\n", nome_cidade);
   printf("Populacao: %d\n", Populacao);
   printf("Area: %.3f\n", area);
   printf("PIB: %.3f\n", PIB);
   printf("Numero de pontos turisticos: %d\n", NPT);
   printf("\n");

printf("Carta 2:\n \n");
   printf("Carta: %s\n", ncarta2);
   printf("Estado:%c\n", Estado2);
   printf("Codigo: %c%s\n", Estado2, cdc2);
   printf("Nome da cidade: %s\n", nome_cidade2);
   printf("Populacao: %d\n", Populacao2);
   printf("Area: %.3f\n", area2);
   printf("PIB: %.3f\n", PIB2);
   printf("Numero de pontos turisticos: %d\n", NPT2);
   printf("\n");
   
   return 0;

}