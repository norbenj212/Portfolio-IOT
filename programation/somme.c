#include <stdio.h>

void main(void){
	int nombre;
	int somme = 0;
	int i = 1;

	while (i <= 5) {
		printf("Nombre : ");
		scanf_s("%d", &nombre);
		somme += nombre;
		i++;
	}
	printf("Somme : %d", somme);
}
