/*
*ALUNO: Tiago de Oliviera Braga Gabriel RU:5123562
*DATA DE CRIAÇÃO:27.05.2025
*REPOSITÓRIO GITHUB:https://github.com/tobgabriel/liguagemdeprogramacao-uninter
*/
#include <stdio.h>

//EXIGÊNCIA DE CÓDIGO 1 - Estrutura de Dados: Crie uma struct chamada `Notas`...
typedef struct{
    //Atributos
    int notaAPOL1;
    int notaAPOL2;
    int notaProvaObjetiva;
    int notaProvaPratica;
}NOTAS;

/*EXIGÊNCIA DE CÓDIGO 2- Solicite ao usuário que digite cada uma das notas,
garantindo que os valores estejam dentro do intervalo de 0 a 100.*/
void validaNota(int seletor, NOTAS *dado){
    int escape=1,bufferDeEntrada;
     do{
        switch(seletor){
            case 1:
                printf("\nDigite o valor da nota de APOL1(0-100):");
                break;
            case 2:
                printf("\nDigite o valor da nota de APOL2(0-100):");
                break;
            case 3:
                printf("\nDigite o valor da nota da prova objetiva(0-100):");
                break;
            case 4:
                printf("\nDigite o valor da nota da prova pratica(0-100):");
                break;
            default:
                printf("ERRO - O seletor da função validaNota está fora da faixa");
                break;
        }
        scanf("%d",&bufferDeEntrada);
        if(bufferDeEntrada>=0 && bufferDeEntrada<=100){
            switch(seletor){
                case 1:
                    dado->notaAPOL1=bufferDeEntrada;
                    break;
                case 2:
                    dado->notaAPOL2=bufferDeEntrada;
                    break;
                case 3:
                    dado->notaProvaObjetiva=bufferDeEntrada;
                    break;
                case 4:
                    dado->notaProvaPratica=bufferDeEntrada;
                    break;
                default:
                    printf("ERRO - O seletor da função validaNota está fora da faixa");
                    break;
            }
            escape=0;
        }else{
            printf("\nERRO - Valor de nota fora da faixa válida(0 - 100)");
        }        
    }while(escape);
}

//EXIGÊNCIA DE CÓDIGO 3 - Cálculo da Média: ...pesos para calcular a média ponderada.
int calculaMedia(NOTAS *dado,int *pesos){
    int index;
    return (dado->notaAPOL1*pesos[0]+dado->notaAPOL2*pesos[1]+dado->notaProvaObjetiva*pesos[2]+dado->notaProvaPratica*pesos[3])
     / (pesos[0]+pesos[1]+pesos[2]+pesos[3]);
}



//FUNÇÃO PRINCIPAL DO PROGRAMA
int main(int argc, char *argv[]){
    //CABEÇALHO DE IDENTIFICAÇÃO DO EXERCÍCIO
    printf("\n*********************************************************");
    printf("\n|\tATIVIDADE PRÁTICA LINGUAGEM DE PROGRAMAÇÃO\t|");
    printf("\n*********************************************************");
    printf("\n|ALUNO:Tiago de Oliveira Braga Gabriel\t\t\t|");
    printf("\n|RU:5123562\t\t\t\t\t\t|");
    printf("\n*********************************************************");
    printf("\n|\t\t\tEXERCICIO 1\t\t\t|");
    printf("\n*********************************************************");
    //VARIÁVEIS DE PROGRAMA
    NOTAS aluno;
    int indiceSeletor,media;
    int pesoNotas[4]={15,15,30,40};
    //CHAMA A FUNÇÃO PARA PREENCHER E VALIDAR TODAS AS NOTAS
    for(indiceSeletor=1;indiceSeletor<=4;indiceSeletor++){
        validaNota(indiceSeletor,&aluno);
    }
    //CABEÇALHO SE SAÍDA DE DADOS
    printf("\n*********************************************************");
    printf("\n|\t\t\tSAÍDA DE CÓDIGO\t\t\t|");
    printf("\n*********************************************************");
    //APRESENTA AS NOTAS DIGITADAS
    printf("\n\nAPOL1:%d\tAPOL2:%d\tObjetiva:%d\tPratica:%d",aluno.notaAPOL1,aluno.notaAPOL2,aluno.notaProvaObjetiva,aluno.notaProvaPratica);
    //CALCULA A MÉDIA
    media=calculaMedia(&aluno,pesoNotas);
    printf("\nMédia Calculada:%d",media);
    ///EXIGÊNCIA DE CÓDIGO 4-Determinação da Situação :Classifique o aluno com base na média obtida
    if(media>=70){
        printf("\nSituação: Aprovado");
    }else if(media<70 && media>=30){
        printf("\nSituação: Exame");
    }else if(media<30){
        printf("Situação: Reprovado");
    }
    printf("\n\n");
    return 0;
}
