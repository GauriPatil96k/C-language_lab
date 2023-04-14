/*Write a program in C to check the number is 
Armstrong or Not*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int number,or,rem,ans,sum=0,count=0;
 clrscr();
 printf("\n Enter the Number:=");
 scanf("%d",&number);
 or=number;
 while(or!=0)
 {
 or=or/10;
 count++;
 }
 or=number;
 while(or!=0)
 {
 rem=or%10;
 ans=pow(rem,count);
 sum=sum+ans;
 or=or/10;
 }
 printf("\n After Performing Operation result=%d",sum);
 if(sum==number)
 {
 printf("\n Number %d is Armstrong Number",number);
 }
 else
 {
 printf("\n Number %d is Not Armstrong number",number);
 }
getch();
}
