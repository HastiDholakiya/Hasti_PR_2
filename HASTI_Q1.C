//write a program to check whether a number is even or odd using the ternary operator.

#include<stdio.h>
#include<conio.h>

void main(){
int choice;
clrscr();
printf("Enter a number: ");
scanf("%d",&choice);
  (choice%2==0)?printf("This number is even.....")
	      :printf("This number is odd.....");
getch();
}

/* Enter a nimber : 51
   this number is odd.....
*/