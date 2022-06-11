#include<stdio.h>
#include<string.h>
#include "MinhaBiblioteca.h"

int nTrocas(char *Entrada, char Caracter1, char Caracter2, char *Saida)
{
    long psc_text= 0; // verificadores de posição do texte
    int n=0;
    char var[1000];
    int tamanho = strlen(Entrada);

    printf("%c", Entrada);  

    /*while (Entrada[psc_text] !='\0')  // Verifica elemento nulo
    {      
       
        if (Caracter1 == Entrada[psc_text])
        {
            Saida[psc_text]= Caracter2; 
            n++;  
            psc_text++;          
        }
        else 
        {
            Saida[psc_text]= Entrada[psc_text];
            psc_text++;  
    
        } 
           
    }*/

    return (tamanho);
} 
