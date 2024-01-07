#include <stdio.h>

void afficherConsignes(void) {
	printf("Les dates doiventt etre superieures a 1/1/1900");
	printf("Les mots choisis ne peuvent exceder 25 caracteres");
	printf("...");
}

void main(void) {
	printf("Avant l'appel de la fonction.");
	afficherConsignes();
	printf("Après l'appel de la fonction.");
}
