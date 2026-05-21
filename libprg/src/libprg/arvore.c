//
// Created by aluno on 19/05/2026.
//
#include <stdlib.h>
#include <stdio.h>
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

void travessia_emordem(noa_t*  raiz) {
    if (raiz != NULL) {
        travessia_emordem(raiz->esquerda);
        printf("%d",raiz->dado);
        travessia_emordem(raiz->direita);
    }
}

void travessia_preordem(noa_t* raiz) {
    if (raiz != NULL) {
        printf("%d",raiz->dado);
        travessia_preordem(raiz->esquerda);
        travessia_preordem(raiz->direita);
    }
}

void travessia_posordem(noa_t* raiz) {
    if (raiz != NULL) {
        travessia_posordem(raiz->esquerda);
        travessia_posordem(raiz->direita);
        printf("%d",raiz->dado);
    }
}
//no
//criar_no
//adicionar
//remover
//destruir
//travessia_preordem
//travessia_emordem
//travessia_posordem

