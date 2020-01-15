#include <stdio.h>
int palindrome(char str[]);
int palindrome(char str[]) {
	int j=0,length=0,flag=1;
	for (j=0;str[j]!='\0';j++) {
		length++;
	}
	for(j=0;j<length;j++) {
		if (str[j]!=str[length-j-1]) {
		    flag=0;
		}
}
if(flag==0) {
	printf("The given string is not palindrome\n");
}
else 
    printf("The given string is palindrome\n");
		
}
main() {
	char arr[100];
	printf("Enter a string\n");
	scanf("%s",&arr);
	palindrome(arr);
}

