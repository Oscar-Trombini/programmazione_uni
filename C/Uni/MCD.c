#include <stdio.h>

// gcc MCD.c -o main.out && ./main.out

int ricorsiva(int x, int y){

  if(x!=y){
    if(x>y)
      return ricorsiva(x-y, y);

      return ricorsiva(x, y-x);
  }
  return x;
}

int main(void) {
  int x, y;

  printf("inserire due valori: \n");
  printf("1) ");
  scanf("%d", &x);
  printf("2) ");
  scanf("%d", &y);

  while(x!=y) {
    if(x>y)
      x = x-y;
    else
      y = y-x;
  }

  printf("l'mcd è %d \n", x);
  
  printf("l'mcd ricorsivo è %d \n", ricorsiva(x, y));
}