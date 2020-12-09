#include<stdio.h>
int main()
{
    int n, sum = 0, t, r;

    printf("Please enter a number: ");
    scanf("%d",&n);

    for(t=n;t>0;t=t/10)
    {
        r = t%10;
        sum = sum + r*r*r;
    }
     if ( n == sum )
        printf("%d is an armstrong number.",n);
    else
        printf("%d is not an armstrong number.",n);

    return 0;
}
