/**
2
2   4
2   4   6
2   4   6   8
**/

#include<stdio.h>
#include<conio.h>

int main()

{
    int i,j;

    for(i=2;i<=8;i=i+2)
    {
        for(j=2;j<=i;j=j+2)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
