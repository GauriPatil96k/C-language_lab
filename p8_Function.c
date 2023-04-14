/*Write a program in C for Function*/

#include<stdio.h>
#include<conio.h>
#define pi 3.14
void cirarea(float r);
void recarea(float l,float b);
void main()
{
 float radius,length,breadth;
 clrscr();
 printf("\n Enter the Radius of circle:=");
 scanf("%f",&radius);
 cirarea(radius);
 printf("\n Enter the length of Rectangle:=");
 scanf("%f",&length);
 printf("\n Enter the breath of Rectangle:=");
 scanf("%f",&breadth);
 recarea(length,breadth);
 getch();
}
void cirarea(float r)
{
 float cir_area;
 cir_area=pi*r*r;
 printf("\nArea of Circle=%.2f",cir_area);
}
void recarea(float l,float b)
{
 float rec_area;
 rec_area=l*b;
 printf("\nArea of rectangle=%.2f",rec_area);
}