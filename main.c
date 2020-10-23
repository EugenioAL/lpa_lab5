#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

int main(int argc, char *argv[] ){
    TAM = atoi(argv[1]);//pegando o numero de caracteres
    char *vet = argv[2];//alocando os caracteres em um vetor
    int vetTmp[TAM];
    zeraVet(vetTmp,TAM);//inicializando um vetor de int
    int len = TAM;
    while(len > 0 ){//len definira o tamanho da palavra
        perm(vetTmp,vet,len);
        len--;
        zeraVet(vetTmp,TAM);
    }
}
