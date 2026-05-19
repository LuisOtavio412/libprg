//
// Created by aluno on 19/05/2026.
//
#include <stdlib.h>

#include "libprg/libprg.h"

typedef struct noa {
    int dado;
    noa_t *esquerda;
    noa_t *direita;
} noat;

noa_t *criar_noa(int dado) {
    noa_t *no = malloc(sizeof(noa_t));
    no->dado = dado;
    no->esquerda = NULL;
    no->direita = NULL;

    return no;
}

noa_t* adicionar_noa(noa_t* raiz, int dado) {
    if (raiz == NULL) {
        return criar_noa(dado);
    }

    if(raiz->dado < dado) {
        raiz-> direita = adicionar_noa(raiz->direita, dado);
    }
    if (raiz->dado > dado) {
    raiz-> esquerda = adicionar_noa(raiz->esquerda, dado);
    }
    return raiz;
}
v
//no
//criar_no
//adicionar
//remover
//destruir

