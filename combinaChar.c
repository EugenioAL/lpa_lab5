#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int carry_out(int vet[],int len){ // função para gerar cada combinação de palavra
    if(len > 0){
        if(vet[len -1] == TAM-1 ){
            int tmp = len-1;
            vet[len-1] = 0;
           carry_out(vet,tmp);
      }
        else{
            vet[len-1] +=1;
        }
    }
    else{
        return 0;
    }
    return 1;
    
}

int soma(int vet[], int tam){ // valor para definir quando trocar o valor do tamanho da palavra
    int i,sum = 0;
    for(i = 0; i < tam ; i++){
        sum += vet[i];
    }
    return sum;
}

void mostraVet(char string[],int vet[] ,int tam){ //exibir a palavra
    for(int i = 0; i < tam; i++){
        printf("%c",string[vet[i]]);
    }
    printf("\n");
}

void zeraVet(int vet[],int tam){//inicializando o vetor
    for(int i = 0; i < tam; i++){
        vet[i] = 0;
    }
}

void perm(int vet[], char string[],int len){ // mostrando todas as palavras de um tamanho de entrada
   
    while(soma(vet,len) < len*(TAM-1)){
        mostraVet(string,vet,len);
        carry_out(vet,len);
    } 
    mostraVet(string,vet,len);
    zeraVet(vet,TAM);
}