#include <stdio.h>

void main(void){

	double tailleClient;
	double tailleMin = 100;
	double tailleMax = 200;

	printf("Veuillez introduire votre taille en cm : ");
	scanf_s("%lf", &tailleClient);
	
	if (tailleClient>=tailleMin && tailleClient<=tailleMax){
		printf("Acces autorise");
	}

	if (tailleClient<tailleMin){
		printf("Acces refuse : taille trop petite");
	}

	if (tailleClient>tailleMax){
		printf("Acces refuse : taille trop grande");
	}
	}