/*Write a program in C to find factorial of given 
number.*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int i,fact=1,n;
 clrscr();
 printf("\n Enter the number:=");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 fact=fact*i;
 }
 printf("\n Factorial:=%d",fact);
 getch();
}