#include <stdio.h>

double pourcentage(int valeur, int total);

void main(void) {
	double resultat;
	resultat = pourcentage(15, 52);
	printf("%.1f", resultat);
}

double pourcentage(int valeur, int total) {
	return (double)valeur / total * 100;
}
