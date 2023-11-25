#include <stdio.h>

// gcc main.c -o main.out && ./main.out

int main(void) {

  float x=0, c=0, y = 0, s=0;


  while(x!=0 || c==0) {
  
  printf("Inserisci un numero:\n ");
  scanf("%f", &x);

    s = s + x;
    c++;


    printf("%f\n", s);
    printf("%f\n\n", c);
  }

  printf("%f\n\n\n", c);
  
  y = s/(c-1);

  printf("Media: %f", y);
  
  return 0;
}