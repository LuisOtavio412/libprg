#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

/*---    PILHA   ---*/
   typedef struct pilha pilha_t;
   pilha_t* criar_pilha(int capacidade);
   int empilhar(pilha_t* pilha, int valor);
   int desempilhar(pilha_t* pilha);
   int tamanho(pilha_t* pilha);
   bool vazia_p(pilha_t* pilha);
   int destruir_pilha(pilha_t* pilha);

/*---    FILA   ---*/
   typedef struct fila fila_t;
   fila_t* criar_fila(int capacidade);
   int emfileirar(fila_t* fila, int valor);
   int desenfileirar(fila_t* fila);
   bool cheia(fila_t* fila);
   bool vazia_f(fila_t* fila);
   int inicio(fila_t* fila);
   int fim(fila_t* fila);
   int destruir_fila(fila_t* fila);

/*---    LISTAS    ---*/
   typedef struct lista_linear lista_linear_t;
   lista_linear_t* criar_lista(bool ordenada);

/*---    LISTA ENCADEADA    ---*/
   typedef struct no no_t;
   typedef struct lista_encadeada lista_encadeada_t;
   //no_t* criar_no(int dado); essa função já está sendo executada
   lista_encadeada_t* criar_lista_encadeada(bool ordenada);
   void inserir_lista_encadeada(lista_encadeada_t* inicio, int dado);
   no_t* buscar(lista_encadeada_t* lista, int dado);
   lista_encadeada_t* criar_lista_encadeada(bool ordenada);
   void destruir_encadeada(lista_encadeada_t* lista);

/*---    LISTA ENCADEADA    ---*/
   typedef struct nod nod_t;
   nod_t* criar_duplamente_encadeada(int dado);
   void inserir_duplamente_encadeada(nod_t** inicio, int dado);
   nod_t* buscar_duplamente_encadeada(nod_t **inicio, int dado);
   bool remover_duplamente_encadeada(nod_t **inicio, int dado);
   void destruir_duplamente_encadeada(nod_t **inicio);

/*---   Algoritmos de ordenação   ---*/
   int* bubble_sort(int* vetor, int tamanho);
   int* merge (int* vetor, int esquerda, int meio, int direita);
   int* merge_sort (int* vetor, int esquerda, int direita);

/*---   Tabela de Dispersão   ---*/
   typedef struct noh noh_t;
   typedef struct dicionario dicionario_t;
   dicionario_t* criar_dicionario(int m);
   int inserir_hash(dicionario_t *d, char *chave, int valor);

/*---   Arvore   ---*/
   typedef struct noa noa_t;
   noa_t *criar_noa(int dado);
   noa_t* adicionar_noa(noa_t* raiz, int dado);


#endif
