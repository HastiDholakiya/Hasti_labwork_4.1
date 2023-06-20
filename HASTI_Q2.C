#include<stdio.h>
#include<conio.h>

void main(){
int x,y,z;  //variable declaration + variable initialization
clrscr();
printf("Enter the value of X: ");
scanf("%d",&x);
printf("Enter the value of y: ");
scanf("%d",&y);
z=(x/y)*5; //operator precedence
printf("total of %d",z);
getch();
}