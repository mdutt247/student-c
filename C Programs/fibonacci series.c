#include<stdio.h>
#include<conio.h>
int main()
{
    int f0,f1,fn,i;
    f0=0,f1=1;
     printf("the fibonacci series is :\n");
    for(i=0;i<=10;i++)
    {
        fn=f0+f1;
        f0=f1;
        f1=fn;
        printf("%d\n",fn);
    }
    return 0;
}

