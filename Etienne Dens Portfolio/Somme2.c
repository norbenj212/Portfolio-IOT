#include <stdio.h>

void main(void){
	int premierNb;
	int deuxiemeNb;
	int reponse;


	printf("Veuillez introduire le premier nombre : ");
	scanf_s("%d", &premierNb);

	printf("Veuillez introduire le deuxieme nombre : ");
	scanf_s("%d", &deuxiemeNb);

	printf("Veuillez introduire votre reponse : ");
	scanf_s("%d", &reponse);

	int solution = premierNb + deuxiemeNb;

	if (solution == reponse){
		printf("\nCorrect !");
	}
	else{
		printf("\nIncorrect, vous auriez du repondre %d !", solution);
	}
}