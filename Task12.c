#include<stdio.h>
#include<stdlib.h>

main() {
	int choice;
	float cel,fah;
	printf("Select any one of the following options:\n1.Celsius to Fahrenheit \n2.Fahrenheit to Celsius \n3.Exit\n");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("You have selected Celsius to Fahrenheit");
			printf("\n Enter the temperature in celsius\n");
			scanf("%f",&cel);
			fah=(((9*cel)/5)+32);
			printf("The equivalent temperature in Fahrenheit is %f",fah);
			break;
			
		case 2:
			printf("You have selected Fahrenheit to Celsius");
			printf("\n Enter the temperature in Fahrenheit\n");
			scanf("%f",&fah);
			cel=(5*(fah-32)/9);
			printf("The equivalent temperature in celsius is %f",cel);
			break;
			
		case 3:
			exit(0);
			break;
			
		default:
			printf("Invalid choice");
			
		
			
	}
}
