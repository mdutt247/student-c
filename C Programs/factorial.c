#include<stdio.h>
#include<conio.h>
int main()
{
    int val,loop,fact=1;
    printf("enter value \n");
    scanf("%d",&val);
    for(loop=val;loop>=1;loop--)
    {
       fact=fact*loop;

    }
     printf("factorial of %d is %d",val,fact);
    return 0;

}
