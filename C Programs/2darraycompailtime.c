#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[2][5]={1,2,3,4,5,6,7,8,9,10};


printf("\nArray:\n\n");

for(i=0;i<2;i++)
    {
        for (j=0 ; j<5 ; j++)
	      {

              printf("%d  ",a[i][j]);
	      }

	      printf("\n");
    }



}

