#include <stdio.h>

// gcc es16.c -o main.out && ./main.out

int pot(int x, int n) {
  for(int i=1; i<n; i++) {
    x *= n;

    printf("\t%d) ", i+1);
    printf("%d\n", x);
  }
  return x;
}

int ri(int n) {
  int s=0;
  for(int i=0; i<n; i++) {
    s = s * i;
    
    printf("\t%d) ", i);
    printf("%d\n", s);
  }
  return s;
}

int main(void) {

  int n;

  printf("Inserire un valore: ");
  scanf("%d", &n);

  printf("La potenza vale: %d\n",  pot(n,n));
  printf("La successione vale: %d\n",  ri(n));
}