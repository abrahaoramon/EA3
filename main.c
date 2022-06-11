#include <stdio.h>
#include<string.h>
#include "MinhaBiblioteca.h"

int main()
{
    char Texto, *pTexto=&Texto;
    char Palavra, *pPalavra=&Palavra;
    char letra1='a', letra2='b';
    int trocas;

    printf( "Digite o texto:\n");
    gets(pTexto);

    trocas = nTrocas(pTexto, letra1, letra2, pPalavra);

    printf("%d", trocas);

    return 0;

}