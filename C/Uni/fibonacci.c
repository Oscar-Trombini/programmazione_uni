/* File: fibonacci.c */
/* Funzione ricorsiva che dato un numero i >= 0 calcola il numero di Fibonacci
   i-esimo:

   L'i-esimo numero di Fibonacci F(i) e` definito attraverso la seguente
   definizione induttiva:

     F(i) = 0                 se i = 0
     F(i) = 1                 se i = 1
     F(i) = F(i-1) + F(i-2)   se i >= 2

*/

/* Esempio di funzione ricorsiva con ricorsione multipla */


#include <stdio.h>

int c = 0;

int fibonacci(int i)
{
  if (i < 0) return -1; /* F(i) non e' definito per interi i negativi! */

  if (i == 0) return 0;
  else if (i == 1) { c++; return 1; }
  else {
    return fibonacci(i-1) + fibonacci(i-2);
  }
}

int main(void)
{
  int n;
  printf("Inserire intero >= 0 : ");
  scanf("%d", &n);
  printf("L' %do numero di Fibonacci e' %d.\n", n, fibonacci(n));
  printf("\nc;%d",c);
  return 0;
}

/*
  Nota: il numero di Fibonacci cresce molto velocemente. Per calcolare il
  numero di Fibonacci per numeri grandi, modificare la funzione sostituendo
  int con long
*/