/*
*ALUNO: Tiago de Oliviera Braga Gabriel RU:5123562
*DATA DE CRIAÇÃO:27.05.2025
*REPOSITÓRIO GITHUB:https://github.com/tobgabriel/liguagemdeprogramacao-uninter
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//DEFINIÇÕES DE TAMANHO
#ifndef TAMANHO_MAX
    //string deve conter 1 carctere a mais para guardar o '\0' de final de string
    #define TAMANHO_MAX 121
#endif

int main(int argc, char *argv[]){
     //CABEÇALHO DE IDENTIFICAÇÃO DO EXERCÍCIO
    printf("\n*********************************************************");
    printf("\n|\tATIVIDADE PRÁTICA LINGUAGEM DE PROGRAMAÇÃO\t|");
    printf("\n*********************************************************");
    printf("\n|ALUNO:Tiago de Oliveira Braga Gabriel\t\t\t|");
    printf("\n|RU:5123562\t\t\t\t\t\t|");
    printf("\n*********************************************************");
    printf("\n|\t\t\tEXERCICIO 2\t\t\t|");
    printf("\n*********************************************************");
    /*EXIGÊNCIA DE CÓDIGO 1 - Estrutura de Dados:Crie  um  vetor  de  caracteres
    com  120  posições  para  armazenar  o  RU  e  o  nome completo do usuário.*/
    char bufferDeEntrada[TAMANHO_MAX];
    int escape=1,i;
    int contadorVogais=0,contadorConsoantes=0,contadorEspacos=0;

    /*EXIGÊNCIA DE CÓDIGO 2- Entrada de Dados:Solicite ao usuário que digite seu RU
     e seu nome completo, garantindo que o texto digitado caiba no vetor.*/
    do{
        printf("\n\nDigite se RU e seu nome completo:");
        gets(bufferDeEntrada);
        //limpa o buffer do teclado
        fflush(stdin);
        //retorna valores importantes sobre o que foi inputado atentar par a 1 carctere a mais para armazenar '\0'
        printf("\n+--------------------------------------------------+");
        printf("\n+\t\tVALORES RECEBIDOS\t\t   +\n");
        printf("+--------------------------------------------------+\n");
        printf("\n->string:%s\n->tamanho:%d\n->capacidade da string:%d\n",bufferDeEntrada,strlen(bufferDeEntrada),TAMANHO_MAX-1);
        printf("+--------------------------------------------------+\n");
        //verifica o tamanho da string
        if(strlen(bufferDeEntrada)>120){
            printf("\n\nERRO - Tamanho da string digitada acima da capacidade.\n\n");
        }else{
            //Transforma os carcteres em letras maiusculas para facilitar o processamento
            for(i=0;i<TAMANHO_MAX;i++){
                bufferDeEntrada[i]=toupper(bufferDeEntrada[i]);
            }
            escape=0;
        }
    }while(escape);
    /*EXIGÊNCIA DE CÓDIGO 3 - Processamento:Utilize um ponteiro para percorrer o vetor,
    verifique e conte:vogais,consoantes e espaços em branco*/
    for(i=0;i<=strlen(bufferDeEntrada);i++){
        //CONTA AS VOGAIS
        if(bufferDeEntrada[i] == 'A' || bufferDeEntrada[i] == 'E' ||
             bufferDeEntrada[i] == 'I' || bufferDeEntrada[i] == 'O' ||
              bufferDeEntrada[i] == 'U'){
                contadorVogais++;
        }
        //CONTA AS CONSOANTES
        else if((bufferDeEntrada[i]>='A' && bufferDeEntrada[i]<='Z') && !(bufferDeEntrada[i] == 'A' || bufferDeEntrada[i] == 'E' ||
             bufferDeEntrada[i] == 'I' || bufferDeEntrada[i] == 'O' ||
              bufferDeEntrada[i] == 'U')){
                contadorConsoantes++;
        }
        //CONTA ESPAÇOS EM BRANCO
        else if(bufferDeEntrada[i] == ' '){
            contadorEspacos++;
        }
    }
    //CABEÇALHO SE SAÍDA DE DADOS
    printf("\n*********************************************************");
    printf("\n|\t\t\tSAÍDA DE CÓDIGO\t\t\t|");
    printf("\n*********************************************************");
    printf("\nQuantidade de vogais:%d",contadorVogais);
    printf("\nQuantidade de consoantes:%d",contadorConsoantes);
    printf("\nQuantidade de espaços:%d",contadorEspacos);
    return 0;
}
