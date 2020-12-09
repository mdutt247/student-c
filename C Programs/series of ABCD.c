/*to print A B C D E
           A B C D
           A B C
           A B
           A
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,md;
    for(i=69;i>=65;i--)
    {
            for(j=65;j<=i;j++)
        {

         printf("%c",j);

        }
        printf("\n");
    }
    return 0;
}
