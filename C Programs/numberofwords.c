#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[50];
int i,count,countc;
printf("Enter a string : ");
gets(str);
count=0;
i=0;
while(str[i]!='\0')
{
    if(str[i] == ' ')
     count++;
      i++;
}
printf("The total number of words are %d ",count+1);
}
