#include <stdio.h>
#include <stdlib.h>

// gcc es20.c -o main.out && ./main.out

void addv(int *a, int v) {

    for(int i = 0; i<v; i++) {
        a[i] = i;
    }
}

int f(int *a, int *b, int n, int m) {

    int s1=0;
    int s=0;
    int *p = (int *)malloc(sizeof(int) * v);
    
    for(int i=0; i<n-1; i++) {    for(int i=0; i<n-1; i++) {


        s1 = a[i]*b[i];
        s += s1;
    }

    return s;
}

int main(void) {
    int v=0;
    int x=0;
    printf("inserire il valore degli array: ");
    scanf("%d", &v);
    printf("inserire l'indice da moltiplicare: ");
    scanf("%d", &x);

    int *a = (int *)malloc(sizeof(int) * v);
    int *b = (int *)malloc(sizeof(int) * v);
    
    addv(a, v);
    addv(b, v);
    int s = f(a, b, v);


}