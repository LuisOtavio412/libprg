//
// Created by aluno on 24/03/2026.
//

#include <stdlib.h>

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
} pilha_t;

pilha_t* criar_pilha(int capacidade) {
    pilha_t* pilha = malloc(sizeof(pilha_t));
    pilha->elementos = malloc(sizeof(int) * capacidade);
    pilha->topo = -1;
    pilha->capacidade = capacidade;

    return pilha;
}

int empilhar(pilha_t* pilha, int valor) {


}

// empilhar
// desempilhar
// tamanho
// vazia
