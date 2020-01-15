#include<stdio.h>
#include<math.h>

main() {
	int num1,num2,originalnum,armnum=0,count=0,remainder;
	printf("Enter any number");
	scanf("%d",&originalnum);
	num1=originalnum;
	num2=num1;
	do{
		num1=num1/10;
		count++;
	}while(num1>0);
	
	while(num2>0) {
		remainder=num2%10;
		armnum=armnum+pow(remainder,count);
		num2=num2/10;
	}
	if(armnum==originalnum) {
		printf("The given number is an Armstrong number");
	}
	else
	printf("The given number is not an Armstrong number");
}
