#include <stdio.h>
#include <stdlib.h>

// gcc tryList.c -o main.out && ./main.out

struct lista{
    int val;
    struct lista* next;
};

typedef struct lista valore;
typedef valore* successivo;

int main(void) {

    int c = 5;
    successivo punt; // puntatore della lista VUOTA -> non ha alcun valore al suo interno
    
    successivo n = malloc(sizeof(valore)); // dimensione del valore della lista e LOCAZIONE del next del primo elemento della lista
    n->val = 1; // do al primo elemento della lista il valore 1

    punt = n; // collego il primo elemento al collegamento iniziale della lista

    for(int i=2; i<c; i++) {

        (*n).next = malloc(sizeof(valore)); // gli sto riferendo l'indirizzo successivo
        n = n->next; // sposto il puntatore in cima (quindi diventa la malloc appena creata)
        (*n).val = i; // il valore della cella vale i
        
    }

    n -> next = NULL; // l'ultimo nodo successivo deve essere null per dire che la lista finisce

    
    for(int i=0; i<c; i++) {
        if(punt != NULL) {
            int j = (*punt).val;
            punt = (*punt).next;
            printf("%d_ %d\n", i+1, j);
        }
    }

    return 0;
}