#include <stdio.h>
//Desafio do jogo de SuperTrunfo V.05
//Aluno: Giovanni Teixeira
//Matrícula: 202601552074
//Nivel atual: Aventureiro
//Declarando variáveis 

void APRESENTACAO(){
    printf("Seja bem Vindo ao SuperTrunfo\n");
    printf("\nSiga as orientações do console para cadastrar as cartas das cidades\n");
}

void CADASTRO_CONCLUIDO(){
    printf("\nA carta 1 foi registrada com sucesso!\n");
    printf("\n Continue seguindo as orientações no console para cadastrar a segunda carta");
}

void CARTAS_CADASTRADAS(){
    printf("As seguintes cartas foram registradas:\n\n");
}

//Variáveis para cálculo de densidade populacional

float CALCULAR_DP1(int populacao, float area){
    return populacao / area;
}

float CALCULAR_DP2(int populacao2, float area2){
    return populacao2 / area2;
}

//Variáveis para cálculo de PIB per capita




