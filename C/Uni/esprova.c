#include <stdio.h>

int prova(int n){
    if(n>=0) return n;

    return -n;
}

int main(void){

int n, v;

printf("Inserire un valore:");
scanf("%d", &n);

v = prova(n);

printf("Il valore assoluto di %d e' %d", n, v);

return 0;
}