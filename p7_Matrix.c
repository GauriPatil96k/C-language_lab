/*Write a program in C for Matrix addition*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],i,j;
 clrscr();
 printf("\n Enter the First matrix:=");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
 printf("\n Enter the Second matrix:=");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&b[i][j]);
 }
 }
 printf("\n Substraction of two matrix:=");
 for(i=0;i<3;i++)
 {
 printf("\n");
 for(j=0;j<3;j++)
 {
 c[i][j]=a[i][j]-b[i][j];
 printf("\t %d",c[i][j]);
 }
 }
 getch();
}