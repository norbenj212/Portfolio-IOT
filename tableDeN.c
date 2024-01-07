#include <stdio.h>

void main(void){
	int deuxiemeNombre;
	int resultat;

	printf("Quel nombre voulez vous multiplier? : ");
	scanf_s("%d", &deuxiemeNombre);

	for (int i=1 ; i<=10; i++){
		resultat= i * deuxiemeNombre;
		printf("%d x %d = %d\n", i, deuxiemeNombre, resultat);
	}
}