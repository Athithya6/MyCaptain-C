#include<stdio.h>

int main() {
	char str1[100];
	char str2[100];
	int i=0,j=0;
	printf("Enter the first string\n");
	gets(str1);
	printf("Enter the second string\n");
	gets(str2);
	
	while(str1[i]!='\0') {
		i++;
	}
	while(str2[j]!='\0') {
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("The resultant concatenated string is %s",str1);
	return 0;
}
