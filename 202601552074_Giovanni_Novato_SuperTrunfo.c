#include <stdio.h>

void Apresentacao(){
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Siga as próximas orientações do console para cadastrar as cartas de cidade.");
}

void CadastroConcluido(){
    printf("a Carta 1 foi registrada com sucesso!\n");
    printf("Continue seguindo as orientações para cadastrar a segunda carta:\n");
}

void CartasCadastradas(){
    printf("As seguintes cartas foram cadastradas:\n\n");
}

float CalcularDP1(int Populacao, float area){
    return Populacao / area;

}
float CalcularDP2(int Populacao2, float area2) {
    return Populacao2 / area2;

}

// Área de Cálculos de PIB per Capita

float CalcularPIBpC1(float PIB, int Populacao){
    return PIB / Populacao;
}

float CalcularPIBpC2(float PIB2, int Populacao2){
    return PIB2 / Populacao2;
}



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
    float DP1;
    float DP2;
    float PIBpC;
    float PIBpC2;

    Apresentacao();
        printf("\n");

    printf("Digite o número da carta que será criada: \n");
    scanf("%s", ncarta);

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &Estado);

    printf("Digite o código que será atribuido a Carta:\n");
    scanf("%s", cdc);
    scanf("%*c");
    
    printf("Digite o nome da Cidade que será adicionada: \n");
    fgets(nome_cidade,15, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &NPT);

CadastroConcluido();
    printf("\n");

printf("Prosseguindo para o cadastro da carta 2:\n \n");

    printf("Digite o número da carta que será criada: \n");
    scanf("%s", ncarta2);

    printf("Digite a letra inicial do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código que será atribuido a Carta:\n");
    scanf("%s", cdc2);
    scanf("%*c");

    printf("Digite o nome da Cidade que será adicionada: \n");
    fgets(nome_cidade2,15, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &NPT2);


// Área de calculos de Densidade populacional


float Densidade1 = CalcularDP1(Populacao, area);
float CPIBpC1 = CalcularPIBpC1(PIB * 1000000000, Populacao);

float Densidade2 = CalcularDP2(Populacao2, area2);
float CPIBpC2 = CalcularPIBpC2(PIB2 * 1000000000, Populacao2);

CartasCadastradas();

printf("Carta 1:\n \n");
   printf("Carta: %s\n", ncarta);
   printf("Estado:%c\n", Estado);
   printf("Código: %c%s\n", Estado, cdc);
   printf("Nome da cidade: %s", nome_cidade);
   printf("População: %d\n", Populacao);
   printf("Área: %.3f\n", area);
   printf("PIB: %.3f\n", PIB);
   printf("Número de pontos turísticos: %d\n", NPT);
   printf("A densidade populacional é: %.2f hab/km² \n", Densidade1);
   printf("PIB per Capita: %.2f reais\n", CPIBpC1);
   printf("\n");

printf("Carta 2:\n \n");
   printf("Carta: %s\n", ncarta2);
   printf("Estado:%c\n", Estado2);
   printf("Código: %c%s\n", Estado2, cdc2);
   printf("Nome da cidade: %s", nome_cidade2);
   printf("População: %d\n", Populacao2);
   printf("Área: %.3f\n", area2);
   printf("PIB: %.3f\n", PIB2);
   printf("Número de pontos turísticos: %d\n", NPT2);
   printf("A densidade populacional é: %.2f hab/km²\n", Densidade2);
   printf("PIB per Capita: %.2f reais\n", CPIBpC2);
   printf("\n");

return 0;

}