//Write a program in C to demonstrate Arithmetic operators.

#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 float div;
 clrscr();
 printf("\n Enter the First number=");
 scanf("%d",&a);
 printf("\n Enter the Second number=");
 scanf("%d",&b);
 c=a+b;
 printf("\n Addition of Two numbers=%d",c);
 c=a-b;
 printf("\n Substraction of Two numbers=%d",c);
 c=a*b;
 printf("\n Multiplication of Two numbers=%d",c);
 div=(float)a/b;
 printf("\n Division =%.2f",div);
 c=a%b;
 printf("\n Remainder=%d",c);
 getch();
}