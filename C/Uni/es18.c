#include <stdio.h>
#include <stdlib.h>

// gcc es18.c -o main.out && ./main.out

void f(int *a, int d) {

   for(int i = 0; i<v; i++) {
        a[i] = 10;
        printf("Il valore è %d\n", a[i]);
   } 

    free(a);
}

int main(void) {

    int v=0;
    printf("inserire il valore dell'array: ");

    scanf("%d", &v);

    int *a = (int *)malloc(sizeof(int) * v);
    
    f(a, v);

}

