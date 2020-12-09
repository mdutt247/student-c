//Find the sum of digits entered by the user.

#include<stdio.h>
#include<conio.h>

int main()
{

int n, loop, sum=0;


printf("Enter a number:");

scanf("%d",&n);

while(n=0)
{
sum=n%10;

n=n/10;
}

printf("Sum:%d",sum);

return 0;

}
