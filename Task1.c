#include<stdio.h>
main() {
	char name[50];
	int age;
	int mobno[10];
	printf("Enter your name");
	scanf("%s",&name);
	printf("Enter your age");
	scanf("%d",&age);
	printf("Enter your phone number");
	scanf("%s",&mobno);
	printf("Your name is %s\n your age is %d\n your phone number is %s",name,age,mobno);
	}
