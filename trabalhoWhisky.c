#include "trabalhoWhisky.h"


void inicializa(LISTA * l){
    l->nroElem = 0;

}

void insere_elementos(LISTA * l, REGISTRO whiskyincluir){
    int i;
    if(l->nroElem<MAX){// O IF FAZ UMA COMPARACAO SE O NUMERO DE ELEMENTOS FOR MAIOR QUE O MAX = NUMERO MAXIMO DE POSSICOES NA LISTA, PARA VER SE A LISTA ESTA CHEIA OU NAO
            for (i = l->nroElem; i >=0; i --){// i = NUMERO TOTAL DE ELEMENTOS NA LISTA
                if(l->A[i-1].codProduto>whiskyincluir.codProduto){// l PONTA PARA O ULTIMA POSICAO DENTRO DA LISTA A E PARA O NUMERO DO CHAVE E COMPARA SE FOR MAIOR COM O NOVO.CHAVE
                    l->A[i]=l->A[i-1];//PASSA O ELEMENTO UMA CASA PARA FRENTE
                }
                else{//CASO A LISTA ESTEJA NAO ESTEJA CHEIA E ORGANIZADA
                    break;
                }
            }
            l->A[i]=whiskyincluir;//ADICIONA UM NOVO ELEMENTO
            l->nroElem=l->nroElem +1;//SOMA MAIS 1 NO NUMERO DE ELEMENTOS TOTAIS DA LISTA
    }
    else
        printf("\n\n NÃO DA PARA INSERIR BROTHER --> A LISTA ESTA CHEIA");
}

void imprime(LISTA * l){
    int i;
    for (i = 0; i<l->nroElem; i++){//PERCORRE A LISTA DE FORMA CRESCENTE, i=0 MARCA O VETOR DA LISTA E COM O PONTEIRO ACESSO AOS ATRIBUTOS DESEJADOS DO REGISTRO

        printf("\n\n [%d] NOME DO WHISKY    -->  %s", i, l->A[i].nomeWhisky);
        printf("\n [%d] CODIGO DO PRODUTO -->  %d", i, l->A[i].codProduto);
        printf("\n [%d] IDADE DO WHISKY   -->  %d", i, l->A[i].idadeWhisky);
        printf("\n [%d] QUANTIDADE        -->  %d\n\n", i, l->A[i].quant);
    }
}

int buscar_elementos(LISTA*l,int numeroQueSeraBuscado){
    int i;
    for (i=0; i<l->nroElem; i++){//PERCORRO A LISTA DE FORMA CRESCENTE
        if(l->A[i].codProduto == numeroQueSeraBuscado){//EM CADA VETOR QUE ELE PASSA DO ATRIBUTO CHAVE DO REGISTRO = (codWhisky), ELE COMPARA IGUALDADE COM O PARAMETRO INSERIDO
            break;
        }
    }
    if( i<l->nroElem && l->A[i].codProduto == numeroQueSeraBuscado){//CASO ESTEJA NA LISTA E O PARAMETRO INSERITO SEJA IGUAL AO BUSCADO ELE IMPRIME A POSICAO E O NOME DO WHISKY
        printf("\n\nVoce buscou pelo CODIGO DE PRODUTO: %d\nQue eh o WHISKY: %s", l->A[i].codProduto, l->A[i].nomeWhisky);
        return (i);
    }
    else{
        return (-1);//CASO NAO ESTEJA ELE RETORNA -1 AVISANDO QUE NAO ESTA NA LISTA
    }
}

void exluir_elemento(LISTA*l, int numeroCodWhiskySeraExcluido){
    int i = buscar_elementos(l, numeroCodWhiskySeraExcluido);
    if (i == -1)
        printf ("Nao houve exclusao, elemento nao esta na lista");
    else{
        for(;i+1<l->nroElem; i++)//COMEÇA A PERCORRER A LISTA APARTIR NO NUMERO BUSCADO
            l->A[i]=l->A[i+1];//SUBSTITUI O NUMERO BUSCADO PELO PROXIMO DA LISTA, ASSIM EXLUINDO O NUMERO BUSCADO
        l->nroElem= l->nroElem-1;//DECREMENTA 1 DO NUMERO TOTAIS DE ELEMENTOS NA LISTA
        printf (" o WHISKY com o CODIGO: %d foi EXCLUIDO", numeroCodWhiskySeraExcluido);
    }
}

int busca_binaria(LISTA*l, int buscarWhisky){
    int meio;
    int i = 0;
    int f = l->nroElem-1;

    if (l->nroElem == 0)
        return (-1);
    do{
        meio = (int)((i+f)/2);
        if(l->A[meio].codProduto>buscarWhisky)
            f=meio-1;
        else if(l->A[meio].codProduto<buscarWhisky)
            i = meio + 1;

            else{
                printf("\n\nBUSCA_BINARIA CODIGO DE WHISKY BUSCADO: %d ---> REFERENTE AO WHISKY: %s\n\n", buscarWhisky, l->A[meio].nomeWhisky);
                return (meio);

            }
    }while(f>=0 && i<l->nroElem && i<=f);
    return (-1);

}
