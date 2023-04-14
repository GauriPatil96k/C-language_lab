/*Write a program in C to demonstrate pointer 
variable*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int *p;
 int var=10;
 clrscr();
 p=&var;
 printf("\n Value of variable var is=%d",var);
 printf("\n Value of variable var=%d",*p);
 printf("\n Address of variable var=%p",&var);
 printf("\n Address of variable var is=%p",p);
 printf("\n Address of pointer p=%p",&p);
 getch();
}