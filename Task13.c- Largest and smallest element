#include<stdio.h>

int largest(int arr1[]);
int smallest(int arr2[]);

int largest(int arr1[]) {
	int i=0;
	int large;
	large=arr1[0];
	for(i=0;arr1[i]!='\0';i++) {
		if(large<arr1[i]) {
			large=arr1[i];
		}
		}
	printf("\nThe largest number is %d",large);
	return 0;
}

int smallest(int arr2[]) {
	int k=0;
	int small;
	small=arr2[0];
	for(k=0;arr2[k]!='\0';k++) {
		if (small>arr2[k]) {
			small=arr2[k];
		}
	}
	printf("\nThe smallest number is %d",small);
	return 0;
}
main() {
	int arr[1000];
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int j=0;
	printf("Enter the numbers\n");
	for(j=0;j<n;j++) {
		scanf("%d",&arr[j]);
	}
	largest(arr);
	smallest(arr);
}

