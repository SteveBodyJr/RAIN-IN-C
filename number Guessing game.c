//Simple game for two people guessing numbers 

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <strings.h>
#include <ctype.h>

 int number, guess1;
 char turn[1];
 
 int ChangeTurn(){
 	
 		system("cls");
 	printf("\t\t\t\t\t NOW ITS YOUR TURN DO YOU WANT TO PUT A NUMBER FOR GUESSING ? (Y/N) :\n");
    scanf("%s", &turn);
	if (strcmp(turn,"y")==0)
 {
 	main();
 }
else 
 {
 	system("cls");
 	printf("\t\t\t\t\t BYE BUDDY !\n\n\n\n\n\n\n\n");
 	printf("\t\t\t\t\t DEVELOPED BY : Steven Body !\n");
 	printf("\t\t\t\t\t LuoTech . Co\n");
 }
 	
 }

int trial()
{
		system("cls");
	printf("\t\t\t\t\t TRY YOUR LAST CHANCE BUDDY :\n");
    scanf("%d", &guess1);
	if (number==guess1)
 {
 	printf("\t\t\t\t\t CORRECT NUMBER , YOU WIN BRO!\n");
 	ChangeTurn();
 }
else 
 {
 	
 	printf("\t\t\t\t\t INCORRECT NUMBER\n");
 	ChangeTurn();
 }
}

int main()
{
system("cls");
printf("\t\t\t\t NUMBER GUESSING GAME\n");	
printf("\t\t\t\t\t ***Make sure Other player Dont see your number*** :\n");
printf("\t\t\t\t\t ENTER A NUMBER :\n");
 scanf("%d", &number);
 if (number>10){
 
 printf("\t\t\t\t\t Number should be between 1-10 only:\n");
 	
 }
// else if(!isdigit(number)){
// 	
// 	printf("\t\t\t\t\t Dont put Characters or Alphabets , Only Digits Please:\n");
// }
  else {
 
 system("cls");
 printf("\t\t\t\t NUMBER GUESSING GAME\n");
 
 printf("\t\t\t\t\t A RANDOM NUMBER BETWWEN 1-10 ENTERED , YOU HAVE TWO CHANCES :\n");
 scanf("%d", &guess1);

if (number==guess1)
 {
 	printf("\t\t\t\t\t CORRECT NUMBER , YOU WIN BRO!\n");
 }
else 
 {
 	system("cls");
 	printf("\t\t\t\t\t INCORRECT NUMBER\n");
 	 
    trial();
 }
}
 

	return 0;
}