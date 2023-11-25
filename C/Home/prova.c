#include <stdio.h>


int num(int n) {

  if(n==0) return 4;

  return 4*num(n-1)+3*n;
}

int ni(int n) {
  int f1 = 4;
  int tmp;
  
  if(n==0) return 4;

  for(int i = 1; i<=n; i++) {
    tmp = 4*f1+3*i;
    f1=tmp;
  }
  
  return tmp;
}

int main(void) {
  int x, y;
  printf("Inserire un valore: ");
  scanf("%d", &x);
  printf("Inserire un valore: ");
  scanf("%d", &y);

  printf("La successione vale %d \n", num(x));
  printf("La successione vale %d ", ni(x));
}