#include <stdio.h>

// gcc es5.c -o main.out && ./main.out

int uno(int n) {

  if (n == 0)
    return 0;

  if (n == 1)
    return 0;

  printf("%d\n", n);
  return (uno(n - 1) + uno(n - 2));

  return 0;
}

int due(int n) {

  int a, b;

  for (int i = 0; i <= n; i++) {
    a = i;

    b = a + b;
  }
}

int main(void) {

  int a;

  printf("Inserisci un numero: ");
  scanf("%d", &a);

  int y = uno(a);

  int x = due(a);

  return 0;
}