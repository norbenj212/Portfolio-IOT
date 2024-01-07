#include <stdio.h>

void main(void){
	int plAdultes;
	int plJeunes;
	double prixTotal ;
	printf("\nEntrez le nombre de places adultes : ");
	scanf_s("%d", &plAdultes);
	printf("\nEntrez le nombre de places jeunes : ");
	scanf_s("%d", &plJeunes);
	prixTotal = plAdultes * 6.5 + plJeunes * 5.5;
	printf("Nombre de places adultes : %d\nNombre de places jeunes : %d\nPrix total : %.2lf", 
		plAdultes, plJeunes, prixTotal );
}