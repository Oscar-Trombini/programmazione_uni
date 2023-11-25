#include <stdio.h>

int somma(int x, int y);

double mediaAritmetica(int x, int y);

int main(void) {
  int x, y;
  
  printf("inserisci il primo numero: ");
  scanf("%d", &x);
  printf("inserisci il secondo numero: ");
  scanf("%d", &y);
  int somm = somma(x, y);
  float media = mediaAritmetica(x, y);
  printf("la somma è: %d \n",somm);
  printf("la media aritmetica è : %f", media);
  return 0;
}

int somma(int x, int y){
  return x + y;
}

double mediaAritmetica(int x, int y){
  return (x + y) / 2.0;
}