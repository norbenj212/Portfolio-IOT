#include <stdio.h>
#include <stdbool.h>

void main(void){
	double temperature=15;
	int somme=120;
	int nombre=2;

	bool plusDe15Degres = temperature > 15;
	bool sommeEgale120 = somme == 120;
	bool nonNul = nombre != 0;
	bool estPair = nombre % 2 == 0;

	printf("La condition est evaluee a %s\n", plusDe15Degres ? "Vrai":"Faux");
	printf("La condition est evaluee a %s\n", sommeEgale120 ? "Vrai":"Faux");
	printf("La condition est evaluee a %s\n", nonNul ? "Vrai":"Faux");
	printf("La condition est evaluee a %s\n", estPair ? "Vrai":"Faux");
	}