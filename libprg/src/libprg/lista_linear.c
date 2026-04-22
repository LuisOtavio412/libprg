//
// Created by aluno on 02/04/2026.
//
#include <stdbool.h>
#include <stdlib.h>
#include <libprg/libprg.h>

#define CAPACIDADE_INICIAL 10

typedef struct lista_linear {
    int capacidade;
    int *elementos;
    int tamanho;
    bool ordenada;
} lista_linear_t;

lista_linear_t *criar_lista(bool ordenada) {
    lista_linear_t *lista = malloc(sizeof(lista_linear_t));
    lista->elementos = malloc(sizeof(int) * CAPACIDADE_INICIAL);
    lista->tamanho = 0;
    lista->capacidade = CAPACIDADE_INICIAL;
    lista->ordenada = ordenada;

    return lista;
}

int destruir_lista(lista_linear_t *lista) {
    free(lista->elementos);
    free(lista);
    return 0;
}

// buscar
// buscar_linear
// buscar_binario
//
// remover(lista_linear_t *lista, int alvo) {
//     int indice = buscar(lista, alvo);
// }

// buscar{
    // if (lista->ordenada) {
    //     indice = buscar_binario
    // } else {
    //     indice = buscar_linear
    // }
// }
// buscar_linear
// buscar_binario
//criar_lista
//inserir
//remover
//buscar
//alterar
//ordenar depois
//combinar
//destruir
