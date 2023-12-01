#include <stdio.h>
#include <stdlib.h>

// gcc es22.c -o main.out && ./main.out

// se vuoi rifarlo, semplicemente reversa il for e cerca dall'ultimo elemento se esso ha una propia copia, in quel caso non lo copia in un sottovettore

void addv(int *a, int v) {

    printf("Stai riempendo il vettore di dimensione %d\n", v);

    for(int i = 0; i<v; i++) {
        printf("inserire un valore: ");
        scanf("%d", (a+i));
    }
}

int* no_dup(int *a, int *b, int d) {
    int flag = 0;
    int s = 0;
    int c;
    
    for(int i = 0; i<d; i++) {

        printf("\t%d\n", a[i]);
        
        for(int j = 0; j<d; j++) {
            

            if(a[i]==a[j]) {
                if(i != j) {
                    flag = 1;
                    s = a[i];
                    c = j;
                }
            }   
        }

        printf("\t\t\t%d\n", flag);
        if (flag == 0) 
            b[i] = a[i];

        flag = 0;
    }

    b[c] = a[c];
    
    free(a);
    
    return b;
}

int main(void) {

    int da = 0;
    
    printf("inserire la dimensione dell'array a: ");
    scanf("%d", &da);

    int *a = (int *)malloc(sizeof(int) * da);
    int *b = (int *)malloc(sizeof(int) * da);

    addv(a, da);

    b = no_dup(a, b, da);
    for(int i = 0; i<da; i++) {
        if(b[i]!=0) printf("%d", b[i]);
    }

    printf("\n");

    return 0;
}