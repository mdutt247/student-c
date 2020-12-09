/*to print 11
           12 13
           13 14 15
           14 15 16 17
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d\t",9+j+i);
    }
    printf("\n");
  }
  return 0;
}
