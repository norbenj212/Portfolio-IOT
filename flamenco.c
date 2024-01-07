#include <stdio.h>

void main(void){
	int age;

	printf("Veuillez introduire votre age : ");
	scanf_s("%d", &age);

	if (age<6){
		printf("Acces refuse : age minimum 6 ans");
	}

	else{
		if (age<11){
			printf("Prix a payer : 100 euros");
		}
		else{
			if(age<18){
				printf("Prix a payer : 120 euros");
			}
			else{
				printf("Prix a payer : 160 euros");
			}
		}
	}
}
