#include <stdio.h>

void main(void){
	int nbParties;
	int sommePoints = 0;
	int pointsPartie = 1;

	for (nbParties=0; nbParties < 10 && pointsPartie != 0;) {
		printf("Points de la partie : ");
		scanf_s("%d", &pointsPartie);
		sommePoints += pointsPartie;
		if (pointsPartie != 0){
			nbParties++;
		}
	}
	printf("Score moyen : %.2f", (double)sommePoints / nbParties);
}