/*Write a program in C for Swapping two integer 
number using call by value*/

#include<stdio.h>
#include<conio.h>
void swap(int x,int y);
void main()
{
 int a,b,temp;
 clrscr();
 printf("\n Enter the First Number:=");
 scanf("%d",&a);
 printf("\n Enter the Second Number:=");
 scanf("%d",&b);
 swap(a,b);
 getch();
}
void swap(int x,int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 printf("\n After Swapping First number=%d and Second 
number=%d",x,y);
}
