// string length witout strlen
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[100];
    int len=0,i;
    printf("enter string :");
    gets(str);

    while(str[i]!='\0')
    {


            len=len+1;
            i++;

    }
    printf("the length of the string is %d",len);
}
