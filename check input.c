// Simple C Program to check if input char is Digit or Digit 

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#define input scanf

char a;

int main () {


system("color 80");
printf("Enter either a Digit , Alphabet or Special Character  \n");
input("%c", &a);


if (isalpha(a)){
	system("cls");
	printf("You Entered a Alphabet Bro!\n");
	printf("Alphabet: %c\n", a);
}
else if (isdigit(a)){
	system("cls");
	printf("You Entered a Digit Bro!\n");
	printf("Digit: %c\n", a);
} 
else

{
	system("cls");
	printf("You Entered Special Character \n");
	printf("Character: %c\n", a);
}
	return 0;
}