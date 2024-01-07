#include <stdio.h>

void main(void){
	double premierNb;
	double deuxiemeNb;

	printf("Veuillez ecrire le premier nombre : ");
	scanf_s("%lf", &premierNb);

	printf("Veuillez ecrire le deuxieme nombre : ");
	scanf_s("%lf", &deuxiemeNb);

	if ((premierNb<0 && deuxiemeNb<0) ||
	 (premierNb>=0 && deuxiemeNb>=0)){

		printf("\nProduit positif");
	}

	else{
		printf("\nProduit negatif");
	}
}
