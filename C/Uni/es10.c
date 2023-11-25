#include <stdio.h>

// gcc es10.c -o main.out && ./main.out

int main(void) {

int i=0, c=0, x, max, min;
  
  printf("Inserire i cicli: ");
  scanf("%d", &c);

  while(i<c) {

    printf("Inserire un numero: ");
    scanf("%d", &x);

    if(x>=max)
      max = x;

    if(x<=min) 
      min = x;

    i++;
  }

  printf("il numero massimo è %d mentre il numero minimo è %d", max, min);
  
}