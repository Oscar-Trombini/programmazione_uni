#include <stdio.h>
#include <stdlib.h>

// Lista di interi Si vuole creare una lista di dimensione N contenente gli elementi 1, . . . , N 
// gcc es24.c -o main.out && ./main.out

struct elemento{ 
    int info; 
    struct elemento* next;
};

typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;


int main(void) {

    ListaDiElementi lista; // puntatore
    int N = 10;
    
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));

    lista = new;
    
    (*new).info = 1;

    for(int i = 2; i<=N; i++) {
        (*new).next = malloc(sizeof(ElementoDiLista));
        new = new->next;
        (*new).info = i;
    }
    new->next=NULL;

    return 0;
}