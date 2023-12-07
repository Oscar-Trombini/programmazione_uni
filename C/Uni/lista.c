#include <stdio.h>
#include <stdlib.h>

// Lista di interi Si vuole creare una lista di dimensione N contenente gli elementi 1, . . . , N 
// gcc es24.c -o main.out && ./main.out

struct elemento{ 
    int info; // valore della cella
    struct elemento* next; // puntatore che punta al nodo successivo
};

typedef struct elemento ElementoDiLista; // mi riferisco al singolo elemento della lista
typedef ElementoDiLista* ListaDiElementi; // mi riferisco alla lista in generale


int main(void) {

    ListaDiElementi lista; // puntatore -> creo una lista vuota
    int N = 10; // creo il numero di elementi da immettere
    
    ListaDiElementi new = malloc(sizeof(ElementoDiLista)); // creo il primo elemento della lista
    (*new).info = 1;

    lista = new; // collego il primo elemento al collegamento iniziale della lista

    for(int i = 2; i<=N; i++) { // aggiungo elementi alla lista
        (*new).next = malloc(sizeof(ElementoDiLista)); // prossimo elemento, allocato e linkato
        new = new->next; // sposto il puntatore in testa alla lista
        (*new).info = i; // assegno il nuovo valore
    }
    new->next=NULL; // chiudo la lista, assicurando che non ci sia next non nullo

    return 0;
}