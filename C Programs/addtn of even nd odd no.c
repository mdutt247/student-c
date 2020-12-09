#include<stdio.h>
#include<conio.h>
int main()
{
    int evn=0,odd=0,n1,n2;
    for(n1=0;n1<=50;n1=n1+2)
    {

        evn=evn+n1;

    }
    printf("%d\n",evn);
    for(n2=1;n2<=50;n2=n2+2)
    {

        odd=odd+n2;
    }
    printf("%d",odd);
    return 0;
}
