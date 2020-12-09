#include<stdio.h>
#include<string.h>
void main()
{
char arr[80];
int i,j=0,flag=0;
printf("Enter string: ");
gets(arr);
for(i=strlen(arr)-1;i>=0;i--)
{
    if(arr[i]==arr[j++])
    flag=1;
    else
    {
    flag=0;
    break;
    }
}
if(flag==1)
printf("palindrome");
else
printf("NOT palindrome");
}
