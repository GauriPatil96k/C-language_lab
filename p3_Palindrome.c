/*Write a program in C to check the number is 
palindrome or not.*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,co=0,or,rem;
 clrscr();
 printf("\n Enter the Number:=");
 scanf("%d",&n);
 or=n;
 while(n!=0)
 {
 rem=n%10;
 co=co*10+rem;
 n=n/10;
 }
 printf("\n Reverse number=%d",co);
 if(or==co)
 {
 printf("\n Number %d is Palindrome",or);
 }
 else
 {
 printf("\n Number %d is Not palindrome",or);
 }
 getch();
}