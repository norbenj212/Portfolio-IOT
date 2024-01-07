#include <stdio.h>

void afficherScore(int score) {
	printf ("votre score est de : %d \n", score);
	if (score < 10) {
		printf("Pas terirble ...\n");
	}
	else {
		printf ("Pas mal !\n");
	}
}

void main(void) {
	int score = 13;
	int points	= 5;
	afficherScore(7);
afficherScore(5 + 9);
afficherScore(score);	
afficherScore(points);

}
