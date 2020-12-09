#include<stdio.h>

int main()
{
    int i,j,sum,n;

    printf("Please enter the value of N: ");
    scanf("%d",&n);

    for(i=1;i<=1000;i++)
    {
        for(j=i,sum=n;j>=1;j=j/10)
            sum=sum+(j%100)*(j%10)*(j%1);
        if(sum==i)
            printf("%d is Armstrong.\n",i);
    }
    return 0;
}
