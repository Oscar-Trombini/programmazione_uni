#include <stdio.h>

// gcc es12.c -o main.out && ./main.out

float ri(int x){

  if(x==1) return -1;

  if(x==2) return 0;

  if(x%2==0) 
    return (0.5 * ri(x-2) - ri(x-1) + 1);

  return (2*x + ri(x-1) + 1 + 2 * ri(x-2));
}

float fr(int n) {
    if (n == 1) return -1;
    if (n == 2) return 0;
    if (n % 2 == 0) return 0.5*fr(n-2) - fr(n-1) + 1.0;
    return 2.0*n + fr(n-1) + 1.0 + 2.0*fr(n-2);
}


float it(int x) {

  float f1=-1, f2=0, tmp;
  
  if(x == 1) return f1;

  if(x == 2) return f2;

  for(int i=3; i<=x; i++) {
    if(i%2==0)
      tmp = 0.5 * f1 - f2 + 1.0;
    else
      tmp = 2 * i + f2 + 1 + 2 * f1;

    f1 = f2;
    f2 = tmp;
    
  }

  return tmp;
}


float fi(int n) {
    float f1 = -1.0;
    float f2 = 0.0;
    float tmp;

    if (n == 1) return f1;
    if (n == 2) return f2;

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) 
          tmp = 0.5*f1 - f2 + 1.0;
        else tmp = 2.0*i + f2 + 1 + 2*f1;
        f1 = f2;
        f2 = tmp;
    }

    return tmp;
}

int main(void) {

  int n;
  float r, i;
  
  printf("Inserire un valore: ");
  scanf("%d", &n);

  r = ri(n);

  i = it(n);
  
  printf("Funzione ricorsiva vale %f \n", r);
  printf("Funzione ricorsiva vale %f \n", fr(n));
  printf("Funzione iterativa vale %f \n", i);
  printf("Funzione ricorsiva vale %f \n", fi(n));

  
}