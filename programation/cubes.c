#include <stdio.h>

int cube (int entier) {
		return entier*entier*entier;
	}

void main (void) {
	printf("Avant l’appel de la fonction. \n");
	int resultat;
	resultat = cube(10);
	printf("%d", resultat);
	printf("Après l’appel de la fonction.\n");
}
