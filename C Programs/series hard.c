#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k;
  k=11;
 for(i=0; i<4; i++)
         {
             for (j=1; j<=i; j++)
              {
                  for (k=1; k<=j; k++)
                  {
                      printf("%d",j);
                      printf("\n");
                  }

              }
         }
    printf("\n\a");

  return 0;
}
