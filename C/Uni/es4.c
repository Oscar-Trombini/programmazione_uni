#include <stdio.h>

// gcc main.c -o main.out && ./main.out

int uno(int a) {

  int b = 0, j = 0;
  
  for(int i=1; i<=a; i++) {
    b = a%i;
    if( b == 0 )
      j++;
  }

  if(j==2)
    printf("numero primo\n");
  else
    printf("numero non primo\n");

  return 0;
}


int due(int i, int n, int c){
// n sarebbe il numero inserito, i i cicli, c il contatore
  
  if(i<=n) {

    if(n%i == 0)
      c++;
    return due(i+1, n, c);
  }

  if(c==3)
    printf("numero primo\n");
  else
    printf("numero non primo\n");

  return 0;
}

int tre(int n) {

  int x1, x2;
  
  printf("inserire un intervallo\n 1:");
  scanf("%d", x1);
  printf("2:");
  scanf("%d", x2);
  
  
}

int main(void) {

  int a, b=1, c=1;

  printf("Inserisci un numero: ");
  scanf("%d", &a);

  // int y = uno(a);
  int y = due(b, a, c);
  // int x = tre();

  return 0;
}