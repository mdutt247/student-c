#include<stdio.h>
#include<conio.h>
int changeA(int *);
void main()
{
    int a=10;
    printf("the value of a before change =%d\n",a);
    int x;
    x=changeA(&a);
    printf("value of a being changed = %d\n",x);
    printf("value o fa after =%d\n",a);

}
int changeA(int *a)
{
    *a+5;
    return *a;
}
