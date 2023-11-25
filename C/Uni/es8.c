#include <stdio.h>

int va(int x) {
  
  if (x >= 0) 
    return x;
  else 
    return -x;
}

int main(void) {
  int a, b, c;

  printf("inserire un numero: \n");
  scanf("%d", &a);
  printf("inserire un numero: \n");
  scanf("%d", &b);

  if(b>=0) 
    printf("numero positivo\n");
  else
    printf("negativo\n");

  if(a%2==0)
    printf("numero pari\n");
  else
    printf("numero dispari\n");

  printf("a + b = %d\n", (a+b));

  printf("il risultato massimo è %d\n", (va(a)+va(b)));
  

  
}