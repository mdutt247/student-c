//Store values in Array and print the largest number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int record[5], i, max=1, loop;

   printf("Enter 5 Values:\n");

    for(loop=0; loop<=4; loop++)
    {
        printf("\nEnter Value %d: ",loop);

        scanf("%d",&record[loop]);
    }
printf("*********");


    for(i=0; i<=4; i++)
    {
       if(max<record[i])
       {
           max=record[i];
       }

    }
printf("\nMaximum value is: %d",max);

    return 0;

}
