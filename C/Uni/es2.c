#include <stdio.h>

// gcc main.c -o main.out && ./main.out

int pot(int n, int e) {
  if(e>0) {
    int m = 1;
    for(int i = 0; i<e; i++) {
      m = m * n;
    }
    return m;
  }

  return 0;
}

int uno(int a, int b) {

  for(int i=a; i<=b; i=i+2) {
    printf("%d\n", i);
  }

  return 0;
}


int due(int a, int b) {

  if(a<=b) {
    printf("%d\n", a);
    return due(a=a+2, b);
  }

  return 0;
}

int main(void) {

  int a, b;

do{
  printf("Inserisci un numero più piccolo: ");
  scanf("%d", &a);
  
  printf("Inserisci un altro numero più grande: ");
  scanf("%d", &b);

}while(a>b);
  

// int y = uno(a, b);
 int y = due(a, b);

  return 0;
}