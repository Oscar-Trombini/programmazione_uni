#include <stdio.h>

// gcc es11.c -o main.out && ./main.out

int main(void){
  
  int x, n, s;

  printf("inserire un valore: ");
  scanf("%d", &x);
  
  printf("inserire i cicli: ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++) {

    if(x>1)
      for(int j=1; j<=i; i++)
        x = x * x;

    printf("%d", x);
  }

  
}