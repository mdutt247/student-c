// ocppy string without strcpy
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100],copy[100];
    int i=0;
    printf("enter string :");
    gets(str);
    do
    {
        copy[i]=str[i];
    }while(str[i++]!='\0');

    printf("the copy of the string is : ");
    puts(copy);
}
