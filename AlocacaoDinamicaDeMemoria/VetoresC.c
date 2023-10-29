#include <stdio.h>
#include <stdlib.h>

// Função para alocar vetores do tipo int
int* CriaVetInt(int tamanho){
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        fprintf(stderr, "Erro na alocação de memória para o vetor de inteiros\n");
        exit(1);
    }
    return vetor;
}

// Função para alocar vetores do tipo float
