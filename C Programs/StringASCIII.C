#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int ascii=0,asc;
    char str[50];
    int i, len;

   printf("Enter the string: ");
//scanf("%s",&str[10]);
gets(str);
len=strlen(str);
printf("\nString: ");
puts(str);

printf("\nLength of String: %d\n\n",len);

for(i=0; i<len; i++)
{

    asc=str[i];
    ascii=ascii+str[i];
    printf("ASCII Value of Letter %c is %d\n",str[i],asc);

}
 printf("\n\nTotal ASCII Value is %d\n",ascii);



}
