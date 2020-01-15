#include<stdio.h>

main() {
	char str[1000];
	printf("Enter any string\n");
	gets(str);
	int length=0,i=0,flag=1;
	while(str[i]!='\0') {
		length++;
		i++;
	}
	for(i=0;i<length;i++) {
		if(str[i]!=str[length-1-i]) {
			flag=0;
		}
	}
	if(flag==0) {
		printf("The given string is not palindrome\n");
	}
	else
	    printf("The given string is palindrome\n");
}
