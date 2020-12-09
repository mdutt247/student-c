#include<stdio.h>
#include<conio.h>
void main()
{
    int mod,j;
    for(j=1;j<=10;j++)
    {
    mod = j % 3;
    printf("%d %d\n",j,mod);
    }

}
