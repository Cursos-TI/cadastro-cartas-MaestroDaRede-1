#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char ncarta[3];
  char estado = 'A'; 'B'; 'C'; 'D'; 'E'; 'F'; 'G'; 'H';
  char cdc[5] = "01"; "02"; "03"; "04"; "05"
  char nome_cidade[20];
  int populacao;
  float area;
  float pib;
  int NPT;
  // Área para entrada de dados
  printf("Digite o número da carta que será criada:\n");
    scanf("%s", ncarta);

  printf("Digite a letra inicial do Estado (de A - H)\n");
    scanf(" %c", &estado);

  printf("Digite o código que será atribuido a carta:\n");
    scanf("%s", cdc);
    scanf("%*c");

  printf("Digite o nome da Cidade:\n");
    fgets(nome_cidade, 20, stdin);

  printf("Digite a população da Cidade:\n");
    scanf("%d", &populacao);

  printf("Digite a área da cidade:\n")
    scanf("%f", &area);

  printf("Digite o Produto Interno Bruto (PIB) da cidade:\n");
    scanf("%f", &pib);

  printf("Digite o número de pontos turísticos presentes na cidade:\n");
    scanf("%d", &NPT);
  // Área para exibição dos dados da cidade

  printf("O número da carta criada é: %s\n", ncarta);
  printf("A letra inicial do Estado é: %c\n", estado);
  printf("O código da carta é: %s%c\n", estado, cdc);
  printf("O nome da cidade é: %s\n", nome_cidade);
  printf("A popopulação total da cidade é: %d\n", populacao);
  printf("A área total da cidade é: %.2f\n", area);
  printf("O PIB da cidade é: %.2f\n", pib);
  printf("O número de pontos turisticos presentes na cidade é: %d\n", NPT);
return 0;
} 
