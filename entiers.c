#include <stdio.h>

void main(void){
	int nbEntier;

	printf("Veuillez introduire votre nombre : ");
	scanf_s("%d", &nbEntier);

	if (nbEntier>0){
		printf("\nCorrect !");
	}
	else{
		printf("\nErreur...");
	}
}