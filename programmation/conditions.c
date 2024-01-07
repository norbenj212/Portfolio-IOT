#include <stdio.h>
#include <stdbool.h>


void main(void) {
  double temperature = 17;
  int somme = 80;
  int nombre = 5;

  bool plusDe15Degres = temperature > 15 ;
  bool sommeEgaleA120 = somme == 120 ;
  bool nonNul = nombre != 0;
  bool pair = nombre % 2 == 0;
  
  printf("La condition est evaluee a %s", plusDe15Degres ? "vrai" : "faux");
  printf("La condition est evaluee a %s", sommeEgaleA120 ? "vrai" : "faux");
  printf("La condition est evaluee a %s", nonNul ? "vrai" : "faux");
  printf("La condition est evaluee a %s", pair ? "vrai" : "faux");
}