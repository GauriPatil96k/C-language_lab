/*Write a program in C to demonstrate Relational 
Operators*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n Enter the First Number:=");
scanf("%d",&a);
printf("\n Enter the Second Number:=");
scanf("%d",&b);
if(a>b)
{
 printf("\n Number %d is Greater than %d",a,b);
}
else
{
 if(a==b)
 {
 printf("\n Number %d and %d are Equal");
 }
 else
 {
 printf("\n Number %d is less than %d",a,b);
 }
}
getch();
}
