#include<stdio.h>

struct book {
	  char title[500];
	  char author[200];
	  char genre[50];
};

void read();
void display();
struct book book1;

void read() {
	printf("Enter the title of the book\n");
	gets(book1.title);
	printf("Enter the author of the book\n");
	gets(book1.author);
	printf("Enter the genre of the book\n");
	gets(book1.genre);
}

void display() {
	printf("\nThe title,author and genre of the book respectively are %s,%s and %s",book1.title,book1.author,book1.genre);
}

void main() {
	read();
	display();
}

