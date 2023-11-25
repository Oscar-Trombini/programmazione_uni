#include <stdio.h>

// gcc fattoriale.c -o main.out && ./main.out


int ri(int n) {

  if(n <= 1)
    return n;

  return (n * ri(n-1));
  
}

void w(int x) {

  int i = x;
    
  while(i>1) {
  
    i--;
    x = x * i;
  }

  printf("il fattoriale while è %d \n", x);
}

void f(int *x) {

  for(int i=*x-1; i>1; i--) 
    *x = *x*i;
  
}


int main(void){
  
  int x,r;
  
  printf("inserire n: ");
  scanf("%d", &x);

  r = ri(x);
  w(x);
  f(&x);
 

  printf("il fattoriale for è %d \n", x);
  printf("il fattoriale ricorsivo è %d \n", r);
}