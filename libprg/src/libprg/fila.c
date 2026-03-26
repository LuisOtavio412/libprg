//
// Created by aluno on 26/03/2026.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int capacidade;
    int* elementos;
    int inicio;
    int tamanho;
    int fim;
} fila_t;

fila_t* criar_fila(int capacidade) {

    fila_t* fila = malloc(sizeof(fila_t));
    fila->elementos = malloc(sizeof(int) * capacidade);
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
    fila->capacidade = capacidade;

    return fila;
}

int emfileirar(fila_t* fila, int valor) {

    if (fila->tamanho >= fila->capacidade) {
        exit(EXIT_FAILURE);
    }

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % fila->capacidade;
    fila->tamanho++;

    return 0;
}

int desemfileirar(fila_t* fila) {

    if (fila->inicio == 0) {
        exit(EXIT_FAILURE);
    }

    int valor = fila->elementos[fila->inicio];
    fila->inicio--;

    return valor;
}

int destruir_fila(fila_t* fila) {

    free(fila->elementos);
    free(fila);

    return 0;
}


// enfileirar
// desemfileirar
// inicio
// fim
// vazia
// cheia
// criar_fila 1
// destruir_fila