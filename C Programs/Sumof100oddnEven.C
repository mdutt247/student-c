#include<stdio.h>
#include<conio.h>

int main()
{

int even=0, odd=0, loop;


for(loop=1;loop<=100;loop++)
{
    if(loop%2==0)
    {
        even=even+loop;
    }
    else
    {
        odd=odd+loop;
    }

}

printf("Sum of Even Numbers is %d.\nSum of Odd Numbers is %d.\n",even,odd);

return 0;
}
