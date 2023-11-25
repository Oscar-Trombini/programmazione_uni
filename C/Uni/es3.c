#include <stdio.h>

// gcc es3.c -o main.out && ./main.out

int uno(int a) {

int somma = 0;
  
  while(a > 0) {
    
    somma = somma + (a % 10);
    a = a / 10;
      
    printf("%d\n", a);
    
    return uno(a);
  }
  
  return 0;
}

int main(void) {

  int a;

  printf("Inserisci un numero: ");
  scanf("%d", &a);

 int y = uno(a);

  return 0;
}