#include <stdio.h>
#define NB_NOMBRES 10

void nombresLus(int nombres[], int taille) {
	for (int i = 0; i < taille; i++) {
		printf("Nombre %d : ", i + 1);
		scanf("%d", &nombres[i]);
	}
}

int minimum(int nombres[], int taille) {
	int min = nombres[0];
	for (int i = 1; i < taille; i++) {
		if (nombres[i] < min) {
			min = nombres[i];
		}
	}
	return min;
}

void main(void) {
	int min;
	int nombres[NB_NOMBRES];
	
	nombresLus(nombres, NB_NOMBRES);
	min = minimum(nombres, NB_NOMBRES);
	printf("%d", min);
}
