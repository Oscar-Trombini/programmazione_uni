#include <stdio.h>
#include <stdlib.h>

// gcc es25.c -o main.out && ./main.out
// cd programmazione_uni/C/Uni/
// cd programmazione_uni/C/Uni/ && gcc es25.c -o main.out && ./main.out

struct el{
    int val;
    struct el * next;
};

typedef struct el elemento;
typedef elemento* lista;

int main(void) {

    int x = 1, c;
    lista l; 
    lista new = malloc(sizeof(elemento));

    l = new;

    printf("Inserire un elemento: \n");

    while(x != 0) {
        scanf("%d", &x);
        new->val = x;
        new->next = malloc(sizeof(elemento));
        new = new->next;
    }
    new->next = NULL;

    new = l;
    
     printf("AAAA\n");

    while(new->next != NULL) {
        if((*new).val != 0) printf("%d\n", (*new).val);
        new = (*new).next;
    }

    
    
    return 0;
}