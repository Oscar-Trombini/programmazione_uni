#include <stdio.h>

int main(void) {

  float x, s, r;

  // radice -> 9 = 3

  printf("inserire un valore: ");
  scanf("%f", &x);

  for(int i=0; i<=x; i++) {
    s = x / i;

    if(s==i)
      r = i;
    
  }

printf("la radice quadrata è %f \n", r);
  
}