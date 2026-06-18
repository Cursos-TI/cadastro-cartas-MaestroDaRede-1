#include <stdio.h>

//Declaração de variaveis

void apresentacao(){
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Siga as próximas orientações do console para cadastrar as cartas de cidade.");
}

void cadastro_concluido(){
    printf("a Carta 1 foi registrada com sucesso!\n");
    printf("Continue seguindo as orientações para cadastrar a segunda carta:\n");
}

void cartas_cadastradas(){
    printf("As seguintes cartas foram cadastradas:\n\n");
}

float calcular_densidade_populacional1(int populacao, float area){
    return populacao / area;

}
float calcular_densidade_populacional2(int populacao2, float area2) {
    return populacao2 / area2;

}

// variaveis para Cálculos de PIB per Capita

float calcular_PIB_per_capita1(float pib, int populacao){
    return pib / populacao;
}

float calcular_PIB_per_capita2(float pib2, int populacao2){
    return pib2 / populacao2;
}



int main() {

    char numero_carta[10];
    char numero_carta2[10];
    char estado;
    char estado2;
    char codigo_da_carta[20];
    char codigo_da_carta2[20];
    char nome_cidade[15];
    char nome_cidade2[15];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int numero_pontos_turisticos;
    int numero_pontos_turisticos2;
    float densidade_populacional1;
    float densidade_populacional2;
    float pib_per_capita1;
    float pib_per_capita2;

    apresentacao();
        printf("\n");

    printf("Digite o número da carta que será criada: \n");
    scanf("%s", numero_carta);

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código que será atribuido a Carta:\n");
    scanf("%s", codigo_da_carta);
    scanf("%*c");
    
    printf("Digite o nome da Cidade que será adicionada: \n");
    fgets(nome_cidade,15, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos);

cadastro_concluido();
    printf("\n");

printf("Prosseguindo para o cadastro da carta 2:\n \n");

    printf("Digite o número da carta que será criada: \n");
    scanf("%s", numero_carta2);

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código que será atribuido a Carta:\n");
    scanf("%s", codigo_da_carta2);
    scanf("%*c");

    printf("Digite o nome da Cidade que será adicionada: \n");
    fgets(nome_cidade2,15, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &numero_pontos_turisticos2);


// Área de calculos de Densidade populacional.


    densidade_populacional1 = calcular_densidade_populacional1(populacao, area);
    pib_per_capita1 = calcular_PIB_per_capita1(pib * 1000000000, populacao);

    densidade_populacional2 = calcular_densidade_populacional2(populacao2, area2);
    pib_per_capita2 = calcular_PIB_per_capita2(pib2 * 1000000000, populacao2);

// Área de impressão dos resultados.

cartas_cadastradas();

printf("Carta 1:\n \n");
   printf("Carta: %s\n", numero_carta);
   printf("Estado:%c\n", estado);
   printf("Código: %c%s\n", estado, codigo_da_carta);
   printf("Nome da cidade: %s", nome_cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.3fkm²\n", area);
   printf("PIB: %.3f\n", pib);
   printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos);
   printf("A densidade populacional é: %.2f hab/km² \n", densidade_populacional1);
   printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
   printf("\n");

printf("Carta 2:\n \n");
   printf("Carta: %s\n", numero_carta2);
   printf("Estado:%c\n", estado2);
   printf("Código: %c%s\n", estado2, codigo_da_carta2);
   printf("Nome da cidade: %s", nome_cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.3fkm²\n", area2);
   printf("PIB: %.3f\n", pib2);
   printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
   printf("A densidade populacional é: %.2f hab/km²\n", densidade_populacional2);
   printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
   printf("\n");

return 0;

}