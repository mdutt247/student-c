#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,md;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)   //to print *
        {                   //         * *
         printf("*");       //         * * *
        }                   //         * *
        printf("\n");       //         *
    }
        for(i=2;i>=1;i--)
    {
            for(j=1;j<=i;j++)
        {
         printf("*");
        }
        printf("\n");
    }
    return 0;
}
