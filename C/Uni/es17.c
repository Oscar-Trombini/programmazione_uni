#include <stdio.h>
#include <stdlib.h>

// gcc Uni/es17.c -o main.out && ./main.out

void f(int v) {

    int *a = (int *)malloc(sizeof(int) * v);

   for(int i = 0; i<v; i++) {
        a[i] = 10;
        printf("Il valore è %d\n", a[i]);
   } 

    free(a);
}

int main(void) {

    int v=0;
    int *i=&v;
    printf("inserire il valore dell'array: ");

    scanf("%d", &v);
    printf("%d %d",v,i);
    f(v);

    return 0;
}

