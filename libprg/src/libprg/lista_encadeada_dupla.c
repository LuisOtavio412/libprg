//
// Created by aluno on 05/05/2026.
//
#include <stdlib.h>
#include <stdbool.h>
#include "libprg/libprg.h"

typedef struct nod {
    int dado;
    nod_t *proximo;
    nod_t *anterior;
} nod_t;


nod_t *criar_duplamente_encadeada(int dado) {
    nod_t *nod = malloc(sizeof(nod_t));
    nod->dado = dado;
    nod->proximo = NULL;
    nod->proximo = NULL;

    return nod;
}

void inserir_duplamente_encadeada(nod_t **inicio, int dado) {
    nod_t *novo = criar_duplamente_encadeada(dado);
    novo->proximo = *inicio;
    (*inicio)->anterior = novo;
    *inicio = novo;
}

bool remover_duplamente_encadeada(nod_t **inicio, int dado) {

    nod_t* atual = *inicio;

    while (atual != NULL) {
        if (atual->dado == dado) {
            if (atual->anterior == NULL) *inicio = atual->proximo;
            else {
                atual->anterior->proximo = atual->proximo;
                atual->proximo->anterior = atual->anterior;
            }

            free(atual);
            return true;
        }

        atual = atual->proximo;
    }
    return false;
}

nod_t* buscar_duplamente_encadeada(nod_t **inicio, int dado) {
    nod_t *atual = *inicio;

    while (atual) { // ou pode ser "while (atual != NULL)"
        if (atual->dado == dado) return atual;
        atual = atual->proximo;
    }

    return NULL;
}

void destruir_duplamente_encadeada(nod_t **inicio) {
    nod_t *atual = *inicio;

    while (atual != NULL) {
        nod_t *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}
