#include <stdio.h>

void sommaProdotto(int *x, int *y) {
  
*x =  *x + *y ;
*y =  *y * -(*y-*x) ;
}


int main(void) {

  int a,b;
  
  scanf("%d", &a);
  scanf("%d", &b);
  
  sommaProdotto(&a, &b);

  printf("somma: %d\n", a);
  printf("prodotto: %d\n", b);
  
return 0;
}	