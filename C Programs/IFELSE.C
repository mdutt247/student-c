#include<stdio.h>
#include<conio.h>

int main()
{
    int day;
    start:
    printf("Enter Day Number 1-7 OR 8 to END:");
    scanf("%d",&day);

    if(day==1)
    {
        printf("Monday\n");
        goto start;
    }
    else if(day==2)
    {
        printf("Tuesday\n");
        goto start;
    }
    else if(day==3)
    {
        printf("Wednesday\n");
        goto start;
    }
    else if(day==4)
    {
        printf("Thursday\n");
        goto start;
    }
    else if(day==5)
    {
        printf("Friday\n");
        goto start;
    }
    else if(day==6)
    {
        printf("Saturday\n");
        goto start;
    }
    else if(day==7)
    {
        printf("Sunday\n");
        goto start;
    }
    else if(day==8)
    {
      goto end;
    }
    else
    {
        printf("Unknown Day!\n\n");
        goto start;
    }
    end:
        //clrscr();
        printf("\n\nBYE BYE\n\n");

    return 0;
}
