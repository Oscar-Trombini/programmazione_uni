#include <stdio.h>

// gcc es13.c -o main.out && ./main.out

float ri(int n) {

  if(n==0) return 0;
  if(n==1) return 3;

  return ((ri(n-1)+3)/2*n)+ri(n-2);
}

float it(int n) {
  float f1 = 1;
  float f2 = 3;
  float tmp;

  if(n == 0) return f1;
  if(n == 1) return f2;
  
  for(int i=2; i<=n; i++) {
    tmp = ((f2+3)/2*i)+f1;  

    f1 = f2;
    f2 = tmp;
  }

  return tmp;
}

int main(void){

  int x;

  printf("Inserire un valore: ");
  scanf("%d", &x);

  printf("la funzione ricorsiva restituisce %f\n", ri(x));
  printf("la funzione ricorsiva restituisce %f\n", it(x));
  
}