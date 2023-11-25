#include <stdio.h>

// gcc main.c -o main.out && ./main.out

int primo(int x) {

  if(x==1)
    return 1;
  
  if(x==2)
    return x;
  
  for(int i=2; i<x; i++) {
    if(x%i==0)
      return 1;
  }
  
  return x;
}

int calcola(int n, int c, int s) {

  if(n<c) {
    if(primo(n)!=1) {
      s = (n*n) + s;
    }else{
      s = s + n;
    }
    
    return calcola(n+1, c, s);
    
  }

  return s;
  
}

int somma(n, c) {
  printf("la somma corrisponde a  %d\n", n);
  if(n==c)
    return (n*primo(n));
  return (n*primo(n) + somma(n+1, c));
}

int main(void)
{
  int p, f, c, s=0;

  printf("Inserire numero di partenza: \n");
  scanf("%d", &p);
  
  do{
  printf("Inserire numero di cicli: \n");
  scanf("%d", &f);
  }while(p>f); 

  // c = calcola(p, f, s);
  c = somma(p, f);

  printf("la somma totale corrisponde a  %d\n", c);
  
  
  return 0;
}