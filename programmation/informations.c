#include <stdio.h>
#include <stdbool.h>

void main(void){
	int age;
	char sexe;
	int anneeNaissance;

	printf("Age : ");
	scanf_s("%d", &age);
	printf("%s", age > 0 && age < 18 ? "Valide\n":"Invalide\n");

	getchar();
	printf("Sexe : ");
	scanf_s("%c", &sexe, 1);
	printf("%s", sexe == 'M' || sexe == 'F' ? "Valide\n":"Invalide\n");

	printf("Annee de Naissance : ");
	scanf_s("%d", &anneeNaissance);
	printf("%s", (anneeNaissance % 4) == 0 && ((anneeNaissance % 100) != 0 || (anneeNaissance % 400) == 0) ? "Valide":"Invalide");
}
