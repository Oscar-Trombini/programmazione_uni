#include <stdio.h>
#include <stdlib.h>

struct elemento{ int info; struct elemento* next;} typedef struct elemento ElementoDiLista;
typedef struct ElementoDiLista* ListaDiElementi;

int main(){
    //creo una lista vuota ListaDiElementi lista = NULL;
          //numero elementi lista
    N = 10;
          //creo il primo elemento della lista
    ListaDiElementi new = malloc(sizeof(ElementoDiLista)); (*new).info = 1;
    
    lista = new
          //aggiungo elementi alla lista
    for(int i=2; i<N; i++) {
    }
    }
    //prossimo elemento, allocato e linkato
    (*new).next = malloc(sizeof(ElementoDiLista)); //sposto puntatore in testa
    new = new->next;
    //assegno nuovo valore
    new.info = i;
    // chiudo la lista, assicurando che non ci sia next non nullo
    new->next = NULL;
}