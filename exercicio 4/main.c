/*
*ALUNO: Tiago de Oliviera Braga Gabriel RU:5123562
*DATA DE CRIAÇÃO:03.06.2025
*REPOSITÓRIO GITHUB:https://github.com/tobgabriel/liguagemdeprogramacao-uninter
*/
#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]){
    //VARIAVEIS DE SISTEMA
    int escape=1;
    int tipoComodo=0,numeroLampadas;
    float comprimento,largura,area,fluxoTotal;

    const float tabelaIluminancia[3]={150.0,300.0,300.0},fatorDeManutencao=0.8;
    //CABEÇALHO DE IDENTIFICAÇÃO DO EXERCÍCIO
    printf("\n*********************************************************");
    printf("\n|\tATIVIDADE PRÁTICA LINGUAGEM DE PROGRAMAÇÃO\t|");
    printf("\n*********************************************************");
    printf("\n|ALUNO:Tiago de Oliveira Braga Gabriel\t\t\t|");
    printf("\n|RU:5123562\t\t\t\t\t\t|");
    printf("\n*********************************************************");
    printf("\n|\t\t\tEXERCICIO 3\t\t\t|");
    printf("\n*********************************************************");

    /*EXIGÊNCIA DE CÓDIGO 1 - Entrada de dados: Solicita ao usuário que informe:
    tipo de comodo, comprimento e largura*/
    while(escape){
        printf("\nSelecione o tipo de comodo:\n1-Quarto\n2-Escritório\n3-Cozinha\n>_");
        scanf("%d",&tipoComodo);
        //VALIDA VALOR DE LEITURA
        fflush(stdin);//limpa bufer de teclado
        if(tipoComodo>=1 && tipoComodo<=3){
            escape=0;
        }else{;
            printf("\nERRO - Valor digitado fora da faixa\n");
        }
    }
    escape=1;
    while(escape){
        printf("\nValor do comprimento do comodo(metros):");
        scanf("%f",&comprimento);
        fflush(stdin);
        if(comprimento>0){
            escape=0;
        }else{
            printf("\nERRO - Valor digitado fora da faixa\n");
        }       
    }
    escape=1;
    while(escape){
        printf("\nValor da largura do comodo(metros):");
        scanf("%f",&largura);
        fflush(stdin);
        if(largura>0){
            escape=0;
        }else{
            printf("\nERRO - Valor digitado fora da faixa\n");
        }
    }
    
    area=comprimento*largura;
    fluxoTotal=(area*tabelaIluminancia[tipoComodo])/fatorDeManutencao;
    numeroLampadas=ceil(fluxoTotal/800);



    //Retorna valores recebidos para computação
    printf("\n+--------------------------------------------------+");
    printf("\n+\t\tVALORES RECEBIDOS\t\t   +\n");
    printf("+--------------------------------------------------+\n");    
    printf("tipo comodo:%d\tcomprimento:%.2f\tlargura:%.2f",tipoComodo,comprimento,largura);

    //CABEÇALHO SE SAÍDA DE DADOS
    printf("\n*********************************************************");
    printf("\n|\t\t\tSAÍDA DE CÓDIGO\t\t\t|");
    printf("\n*********************************************************");
    switch(tipoComodo){
        case 1:
            printf("\nComodo:Quarto\t");
            break;
        case 2:
            printf("\nComodo:Escritório\t");
            break;
        case 3:
            printf("\nComodo:Cozinha\t");
            break;
        default:
            printf("\nComodo selecionado não valido\t");
            break;
    }
    printf("\nArea calculada:%.2f m²",area);
    printf("\nFluxo total necessario:%.2f lm",fluxoTotal);
    printf("\nQuantidade minima de lampadas(800 lm):%d und",numeroLampadas);

    return 0;
}