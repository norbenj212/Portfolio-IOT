#include <stdio.h>

void main(void){
	double prixHTVA;
	int tauxTVA;
	int nbArticles;
	double aPayer;

	printf("Entrez le prix hors TVA : ");
	scanf_s("%lf", &prixHTVA);
	printf("Entrez le nombre d'articles : ");
	scanf_s("%d", &nbArticles);
	printf("Entrez le taux de TVA : ");
	scanf_s("%d", &tauxTVA);

	aPayer= ((prixHTVA * (tauxTVA * 0.01)) * nbArticles) + prixHTVA * nbArticles;
	printf("\nPrix HTVA : %.2lf\nNombre d'articles : %d\nTaux de TVA : %d\nA payer : %.2lf", prixHTVA, nbArticles, tauxTVA, aPayer);
}