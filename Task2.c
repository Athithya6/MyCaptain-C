#include<stdio.h>

main() {
	float cel,fah;
	printf("Enter the temperature in celsius");
	scanf("%f",&cel);
	fah=(((9*cel)/5)+32);
	printf("The equivalent temperature in fahrenheit is %f",fah);
}
