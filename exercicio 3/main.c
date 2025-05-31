/*
*ALUNO: Tiago de Oliviera Braga Gabriel RU:5123562
*DATA DE CRIAÇÃO:27.05.2025
*REPOSITÓRIO GITHUB:https://github.com/tobgabriel/liguagemdeprogramacao-uninter
*/
#ifndef TAMANHO_MAX
#define TAMANHO_MAX 7
#endif
#include <stdio.h>

/*EXIGÊNCIA DE CÓDIGO 2 - PROCESSAMENTO - Implemente uma função recursiva
 que calcule a soma dos inversos das resistências: o Protótipo da função: 
float somaInversos(float resistores[], int indice, int n);
*/
float somaInversos(float resistores[],int indice,int n){
    //se chegou no ultimo resistor some 0
    if(indice == n){
        return 0;
    }else{
        return 1/resistores[indice] + somaInversos(resistores,indice+1,n);
    }
}
int main(int argc, char *argv[]){
    //CABEÇALHO DE IDENTIFICAÇÃO DO EXERCÍCIO
    printf("\n*********************************************************");
    printf("\n|\tATIVIDADE PRÁTICA LINGUAGEM DE PROGRAMAÇÃO\t|");
    printf("\n*********************************************************");
    printf("\n|ALUNO:Tiago de Oliveira Braga Gabriel\t\t\t|");
    printf("\n|RU:5123562\t\t\t\t\t\t|");
    printf("\n*********************************************************");
    printf("\n|\t\t\tEXERCICIO 3\t\t\t|");
    printf("\n*********************************************************");

    /*EXIGÊNCIA DE CÓDIGO 1 - Entrada de dados : Crie um vetor do com o tamanho igual a quantidade de dígitos do seu RU.
    Para cada resistor, solicite o valor da resistência (em ohms).
    */
    float resistencia[TAMANHO_MAX];
    int index=0;
    /*EXIGÊNCIA DE CÓDIGO 2 - Processamento: Armazene os valores das resistências em um vetor,
     o tamanho do vetor deve ser a quantidade de dígitos do seu RU.*/
    for (index=0;index<TAMANHO_MAX;index++){
        printf("\nDiginte o valor da resistencia[%d]:",index+1);
        scanf("%f",&resistencia[index]);
    }


    //Retorna valores recebidos para computação
    printf("\n+--------------------------------------------------+");
    printf("\n+\t\tVALORES RECEBIDOS\t\t   +\n");
    printf("+--------------------------------------------------+\n");
    for(index=0;index<TAMANHO_MAX;index++){
        printf("\n->resistencia[%d] = %.2f",index+1,resistencia[index]);
    }

    //CABEÇALHO SE SAÍDA DE DADOS
    printf("\n*********************************************************");
    printf("\n|\t\t\tSAÍDA DE CÓDIGO\t\t\t|");
    printf("\n*********************************************************");
    printf("\nA soma e:%.4f",1/somaInversos(resistencia,0,TAMANHO_MAX));
    return 0;
}