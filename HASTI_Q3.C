#include<stdio.h>
#include<conio.h>

void main(){
int x,y,z;
clrscr();
printf("Enter the value of x: ");
scanf("%d",&x);
printf("Enter the value of y: ");
scanf("%d",&y);
z=(x+y)*2; // operator precedence
printf("total of %d",z);
getch();
}