#include <stdlib.h>
#include <stdio.h>

// gcc es24.c -o main.out && ./main.out
struct list{
    int val;
    struct list* next;
};

typedef struct list Elemento;
typedef Elemento* Lista;



// stampa la lista
void print_ls(Lista a) {
    if (a!=NULL) {
        printf("%d", a->val);
        print_ls(a->next);
    }
}

void riempi_array(int* a, int d) {

    printf("Stai riempendo il vettore di dimensione %d\n", d);

    for(int i = 0; i<d; i++) {
        printf("inserire un valore: ");
        scanf("%d", (a+i));
    }
}

struct list* pari(int* a, int d) {
    int c;
    Lista list;    
    Lista new = malloc(sizeof(Elemento));
    list = new;
    
    for(int i = 0; i<d; i++) {
        if(i%2==0) {
            new->val = a[i];
            (*new).next = malloc(sizeof(Elemento));
            new = new->next;
        }
    }
    new->next=NULL;

    free(a);

    return list;
}

struct list* terzo_el(Lista list, int d) {

    Elemento* s;

    printf("AAAA");
    
    for(int i=0; i<=d; i++) {
        if(i == d) {
            s = list->next;
            list->next = malloc(sizeof(Elemento));
            list = list -> next;
            list->val = 666;
            list->next = s;
        }else{
            printf("AAAA");
            list = list->next;
        }
    }
    
    return list;
}

int main(void) {

    int d, c = 0;
    Lista l;
    
    printf("Inserire la dimensione dell'array: ");
    scanf("%d", &d);

    int *a = (int *)malloc(sizeof(int) * d);

    riempi_array(a, d);

    l = pari(a, d);


    printf("Stampo gli indici pari\n");


    printf("AAAA\n");
    
    while(l != NULL) {
        if(l->next != NULL){
        printf("\t\tAAAA\n");
        printf("%d\n", (*l).val);
        l = (*l).next;
        c++;
        }
    }
    
    /*
            for(int i=0; i<d; i++) {
        if((*l).next != NULL) {
            int j = (*l).val;
            l = (*l).next;
            printf("%d\n", j);
            c++;
        }
    }
        */

    printf("AAAA");

    l = terzo_el(l, (c/2));
    
    for(int i=0; i<d; i++) {
        if((*l).next != NULL) {
            int j = (*l).val;
            l = (*l).next;
            printf("%d\n", j);
            c++;
        }
    }

    
    
    return 0;
}