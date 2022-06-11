#include <stdio.h>
#include<string.h>
#include "MinhaBiblioteca.h"

int main()
{
    char Texto[1000];
    char Palavra[1000];
    char letra1[10], letra2[10];
    int trocas;

    printf( "\nDigite o texto:\n");
    gets(Texto);
    printf( "\nDigite o caracter a ser substituido e o novo caracter:\n");
    scanf("%c %c", &letra1, letra2);  

    trocas = nTrocas(Texto, *letra1, *letra2, Palavra); //Função
    printf("\nNova palavra: ");
    puts(Palavra);
    printf("\nPalavra inserida pelo usuario: ");
    puts(Texto);
    printf("\nQuantidade de caracteres substituidos: %d\n", trocas);

    return 0;

}