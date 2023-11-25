#include <stdio.h>

int main(void) {
  int x;
  float c, i=0;

do{
  printf("Inserisci un valore: \n");
  scanf("%d", &x);

  c += x;
  
  i++;
  
  printf("%f\n", i);
  printf("%f\n", c);
  
}while(x!=0);

printf("la somma è %f", c/(i-1));

  
  
}