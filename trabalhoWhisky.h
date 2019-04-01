#ifndef TRABALHOWHISKY_H_INCLUDED
#define TRABALHOWHISKY_H_INCLUDED
#include <conio.h>
#include <stdio.h>
#define MAX 30

typedef int TIPOCHAVE;


typedef struct{
    TIPOCHAVE codProduto;
    char nomeWhisky[50];
    int idadeWhisky;
    int quant;
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int nroElem;
}LISTA;

void insere_elementos(LISTA *, REGISTRO);//PROTOTIPO DO FUNCAO INSERIR ELEMENTOS
void inicializa(LISTA *);//PROTOTIPO  DA INICIALIZACAO
void imprime(LISTA *);//PROTOTIPO IMPRIRMIR
int buscar_elementos(LISTA*,int);//PROTOTIPO DA FUNCAO BUSCAR ELEMENTOS
void exluir_elemento(LISTA*, int);//PROTOTIPO DA FUNCAO EXLUIR ELEMENTO
int busca_binaria(LISTA*, int);


#endif // TRABALHOWHISKY_H_INCLUDED
