/*
Variabili:
    guess (numero reale)	// Rappresenta la stima della radice quadrata
    epsilon (numero reale)	// Rappresenta l'approssimazione che vogliamo per la stima

guess = 1
mentre guess * guess non in (x - epsilon, x + epsilon) ripeti
    guess = (guess + x / guess) / 2

guess e' la stima della radice quadrata di x
*/

#include <stdio.h>
#include <math.h>

double my_root(double x)
{
  double guess;
  const double epsilon = 0.00001;

  guess = 1;
  while((guess * guess < x - epsilon) || (guess * guess > x + epsilon)) {
    guess = (x / guess + guess) / 2;
  }

  return guess;
}

int main()
{
  double v=50;

  printf("sqrt(%f) = %f | %f\n", v, sqrt(v), my_root(v));

  return 0;
}