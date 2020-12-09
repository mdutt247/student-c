
#include<stdio.h>
#include<conio.h>
void main()
{
    int number[7];
    int sub;
    for(sub=0;sub<7;sub++)
    {
        printf("enter subject marks %d :",sub+1);
        scanf("%d",&number[sub]);

    }
    for(sub=0;sub<7;sub++)
    {
        printf("you enterd mrks %d,\n ",number[sub]);
    }


}
