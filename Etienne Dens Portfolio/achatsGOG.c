#include <stdio.h>

void main(void){
	double montantAchat;
	double montantTotal;
	double montantJeu;

	printf("Montant du jeu : ");
	scanf_s("%lf", &montantJeu);

	while (montantJeu !=0){
		montantTotal += montantJeu;

		printf("Montant du jeu : ");
		scanf_s("%lf", &montantJeu);
	}
printf("Vous avez achete pour un montant de %.2lf euros", montantTotal);
}