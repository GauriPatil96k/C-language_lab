/*Write a program in C which demonstrates the string 
function*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int x=0,len;
 char str1[10],str2[10],dest[10],str3[10],rev[10];
 clrscr();
 printf(" \n Enter the First String:=");
 scanf("%s",str1);
 printf(" \n Enter the Second String:=");
 scanf("%s",str2);
 x=strcmp(str1,str2);
 if(x==0)
 {
 printf("\n Equal String");
 }
 else
 {
 printf("\n String is not Matched");
 }
 len=strlen(str1);
 printf("\n length of string=%s is %d",str1,len);
 strcpy(dest,str1);
 printf("\n Copied String=%s",dest);
 strcat(dest,str2);
 printf("\n Conacatenation=%s",dest);
 printf("\n reverse string is %s",strrev(str1));
 getch();
}
