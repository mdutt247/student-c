#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=(i % 2);
            for(j=1;j<=i;j++)    //print *
             {                         //# #
                if(k==0)               //* * *
                  {                    //# # # #
                     printf("#");      //* * * * *
                     printf("\t");
                  }
                else if(k==1)
                  {
                     printf("*");
                     printf("\t");
                  }
           }
        printf("\n");
    }
    return 0;
}
