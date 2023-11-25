#include <stdio.h>

int main(void) {
  int x;

  printf("inserire un numero: ");
  scanf("%d", &x);

  if (x >= 0) {
    printf("il numero %d è positivo\n", x);
    printf("il valore assoluto di |%d| è %d\n", x, x);
  } else {
    printf("il numero %d è negativo\n", x);
    printf("il valore assoluto di |%d| è %d\n", x, -x);
  }
}