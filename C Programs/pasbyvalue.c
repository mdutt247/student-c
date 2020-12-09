#include<stdio.h>
#include<conio.h>
int changeA(int );
main()
{
int a=10;
printf("value of a before change=%d\n ",a);
int x;
x=changeA(a);
printf("value of a being changed=%d\n",x);
printf("value of a after change=%d",a);
}
int changeA(int a)
{
a+=5;
 return a;
}
