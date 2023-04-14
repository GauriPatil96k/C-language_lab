/*Write a program in C to demonstrate structure*/

#include<stdio.h>
#include<conio.h>
struct student
{
 int roll;
char name[20];
}s[10];
void main()
{
 int i,n;
 clrscr();
 printf("\n Enter how many student record you want to store:=");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\n Enter the roll number of Student:=");
 scanf("%d",&s[i].roll);
 printf("\n Enter the name of Student:=");
 scanf("%s",s[i].name);
 }
 for(i=0;i<n;i++)
 {
 printf("\n The roll number of Student=%d",s[i].roll);
 printf("\n The name of Student=%s",s[i].name);
 }
getch();
}
