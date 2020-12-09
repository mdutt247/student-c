#include<stdio.h>
#include<conio.h>
void main()       // program for addition ang avg of 10 numbrs
{
    int number[10];
    int i ;
    float avg,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter array element %d :",i);
        scanf("%d",&number[i]);
        sum=sum+number[i];

    }

    printf("the sum is %.2f",sum);
    avg=sum/i;
    printf("\n the avrg is %.2f",avg);


}
