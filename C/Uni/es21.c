#include <stdio.h>
#include <stdlib.h>

// gcc es21.c -o main.out && ./main.out

void addv(int *a, int v) {

    printf("Stai riempendo il vettore di dimensione %d\n", v);

    for(int i = 0; i<v; i++) {
        printf("inserire un valore: ");
        scanf("%d", (a+i));
    }
}

int f(int *a, int *b, int n, int m) {
    int s = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; i<m-1; j++) {
            s += b[j];
            printf("\t%d\n", s);
            if (a[i] == s) return 1;
        }

    }

    return 0;
}

int main(void) {
    int da = 0;
    int db = 0;
    int s = 0;

    printf("inserire la dimensione dell'array a: ");
    scanf("%d", &da);

    printf("inserire la dimensione dell'array b: ");
    scanf("%d", &db);

    int *a = (int *)malloc(sizeof(int) * da);
    int *b = (int *)malloc(sizeof(int) * db);

    addv(a, da);
    addv(b, db);

    if (f(a, b, da, db) != 0){
        printf("L'indirizzo esiste %d\n", f(a, b, da, db));
    }else{
        printf("Non esiste un i tale\n");
    }

}