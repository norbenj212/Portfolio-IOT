#include <stdio.h>

void main (void){
	int nbEntier = 25;
	double nbReel = 25.5;

	printf("Nombre entier : ") ;
	scanf_s("%lf", &nbEntier);
	printf("Nombre reel (avec un .) : ") ;
	scanf_s("%d", &nbReel);
}