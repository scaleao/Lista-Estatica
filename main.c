#include <stdio.h>
#include <stdlib.h>
#include "trabalhoWhisky.h"
#include <string.h>

// Joao Antonio Scaleao Britto
// 400972
// Trabalhod o whisky (Lista Sequencial)
int main()
{

    LISTA lista;
    REGISTRO whiskyincluir;
    inicializa(&lista);


    whiskyincluir.codProduto = 1;
    strcpy(whiskyincluir.nomeWhisky, "JackDaniels");
    whiskyincluir.idadeWhisky = 15;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 2;
    strcpy(whiskyincluir.nomeWhisky , "WhiteHorse");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 3;
    strcpy(whiskyincluir.nomeWhisky , "JohnnieWalker");
    whiskyincluir.idadeWhisky = 18;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 4;
    strcpy(whiskyincluir.nomeWhisky , "Jameson");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 5;
    strcpy(whiskyincluir.nomeWhisky , "Ballantine's");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 6;
    strcpy(whiskyincluir.nomeWhisky , "Chivas");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 7;
    strcpy(whiskyincluir.nomeWhisky , "Passaport");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 8;
    strcpy(whiskyincluir.nomeWhisky, "Dalmore");
    whiskyincluir.idadeWhisky = 15;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 9;
    strcpy(whiskyincluir.nomeWhisky , "Famous Grouse");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 10;
    strcpy(whiskyincluir.nomeWhisky , "Glenfiddich Special Reserve");
    whiskyincluir.idadeWhisky = 18;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 11;
    strcpy(whiskyincluir.nomeWhisky , "Glenmorangie Nectar Dor");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 12;
    strcpy(whiskyincluir.nomeWhisky , "Laphroaig Quarter Cask");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 13;
    strcpy(whiskyincluir.nomeWhisky , "Macallan Elegancia");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 14;
    strcpy(whiskyincluir.nomeWhisky , "Makers Mark");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 15;
    strcpy(whiskyincluir.nomeWhisky, "J e B Rare");
    whiskyincluir.idadeWhisky = 15;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 16;
    strcpy(whiskyincluir.nomeWhisky , "William Grants");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 17;
    strcpy(whiskyincluir.nomeWhisky , "Dewars");
    whiskyincluir.idadeWhisky = 18;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 18;
    strcpy(whiskyincluir.nomeWhisky , "Label 5");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 19;
    strcpy(whiskyincluir.nomeWhisky , "Bell's");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 20;
    strcpy(whiskyincluir.nomeWhisky , "Old Parr");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 21;
    strcpy(whiskyincluir.nomeWhisky , "Cardhu");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 22;
    strcpy(whiskyincluir.nomeWhisky, "Aberfeldy");
    whiskyincluir.idadeWhisky = 15;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 23;
    strcpy(whiskyincluir.nomeWhisky , "Ardbeg");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 24;
    strcpy(whiskyincluir.nomeWhisky , "Balblair");
    whiskyincluir.idadeWhisky = 18;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 25;
    strcpy(whiskyincluir.nomeWhisky , "Bastille");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 26;
    strcpy(whiskyincluir.nomeWhisky , "Buchanan's");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 27;
    strcpy(whiskyincluir.nomeWhisky , "Balvenie");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 28;
    strcpy(whiskyincluir.nomeWhisky , "Wood Peel");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 29;
    strcpy(whiskyincluir.nomeWhisky , "Teacher's");
    whiskyincluir.idadeWhisky = 10;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    whiskyincluir.codProduto = 30;
    strcpy(whiskyincluir.nomeWhisky , "Three Ships");
    whiskyincluir.idadeWhisky = 8;
    whiskyincluir.quant = 100;
    insere_elementos(&lista, whiskyincluir);

    printf ("\n\n A MINHA LISTA POSSUI: %d WHISKY(S)", lista.nroElem);

    imprime (&lista);

    buscar_elementos(&lista, 1);
    buscar_elementos(&lista, 2);
    buscar_elementos(&lista, 3);
    buscar_elementos(&lista, 4);

    if (busca_binaria(&lista, 1) == -1)
        printf("\n\nNao encontrou o elemento\n\n");

    exluir_elemento(&lista, 7);
    exluir_elemento(&lista, 11);
    exluir_elemento(&lista, 17);
    exluir_elemento(&lista, 21);
    exluir_elemento(&lista, 29);
    exluir_elemento(&lista, 9);
    exluir_elemento(&lista, 20);
    exluir_elemento(&lista, 10);

    printf ("\n\nA MINHA LISTA POSSUI: %d WHISKY(S)\n\n\n", lista.nroElem);

    return 0;
}
