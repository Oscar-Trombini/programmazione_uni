#include <stdio.h>

// gcc es15.c -o main.out && ./main.out

float ri(int n, int p) {
  if(n == 1) return p;

  return (0.5*(ri(n-1,p)+(p/ri(n-1,p))));
}

float succ_iter(float n, float p) {
  float s_n;
  double s_n_1 = p;

  if (n == 1)
    return p;

  for (int i = 2; i <= n; i++) {
    s_n = (s_n_1 + (p / s_n_1)) / 2;
    s_n_1 = s_n;
  }
  return s_n;

}

int it(int n) {
  float f1 = 0.5, tmp;

  if(n == 1) return f1;

  for(int i=2; i<=n; i++) {
    tmp = (f1+1)/2;
    f1 = tmp;
  }
  return tmp;
}

int main(void) {
  int n, p;
  
  printf("Inserire un valore: ");
  scanf("%d", &n);
  printf("Inserire un valore: ");
  scanf("%d", &p);

  printf("La successione vale: %f \n", succ_iter(n,p));
  printf("La successione vale: %f \n", ri(n,p));
  // printf("La successione vale: %f \n", it(n));
}