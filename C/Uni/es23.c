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

int* conct(int *a, int *b, int da, int db) {
    int d = da+db;
    int *c = (int *)malloc(sizeof(int) * d);

    printf("\n");
    
    for(int i = 0; i<=d; i++){
        
        if(i<=da) {
            c[i] = a[i];
            printf("\t%d", a[i]);
            printf("\t\t%d\n", c[i]);
        }
        
        if(i>=db){ 
            c[i] = b[i];
            printf("\t%d", b[i]);
            printf("\t\t%d\n", c[i]);
        }
        printf("%d", c[i]);

    }
    
    return c;
}

int* no_dup(int *a, int d) {

    int *b = (int *)malloc(sizeof(int) * d);

    for(int i=d; i>=0; i++) {
        for(int j=d; j>=0; j++) {
            if(a[i] != a[j] && i != j) {
                b[i] = a[i];
            }
        }
    }

    return b;
}

int main(void) {

    int da = 0, db = 0;

    printf("inserire la dimensione dell'array a: ");
    scanf("%d", &da);

    printf("inserire la dimensione dell'array a: ");
    scanf("%d", &db);

    int *a = (int *)malloc(sizeof(int) * da);
    int *b = (int *)malloc(sizeof(int) * da);
    int *c = (int *)malloc(sizeof(int) * (da+db));
    int d = da + db;
    
    addv(a, da);
    
    printf("\n");
    
    addv(b, db);

    printf("\n");

    c = conct(a,b,da,db);

    printf("\n");

    for(int i = 0; i<=(da+db); i++){
        printf("%d", c[i]);
    }

    // b = no_dup(a, (da+db));

    printf("\n");

    return 0;
}