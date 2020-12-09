#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[2][5];
    for(i=0;i<2;i++)
    {
        for (j=0 ; j<5 ; j++)
	      {
		     printf("Enter element [%d,%d]: ",i,j);
              scanf("%d",&a[i][j]);
	      }
    }

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
