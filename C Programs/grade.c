#include<stdio.h>
void main()
{
    float per;
    printf("enter"" percentage");
    scanf("%f",&per);
    if(per<40)
    {
        printf("the student is faild");
    }
    else if(per>=40 && per<50)
    {
        printf("the student is passed with E");
    }
    else if(per>=50 && per<60)
    {
        printf("the student is passed with D ");
    }
     else if(per>=60 && per<70)
    {
        printf("the student is passed with C");
    }
    else if(per>=70 && per<80)
    {
        printf("the student is passed with B");
    }
     else if(per>=80 && per<90)
    {
        printf("the student is passed with A");
    }
    else if(per>=90 && per<=100)
    {
        printf("the student is passed with A+");
    }
    else if(per>100)
    {
        printf("invalid input");
    }

}
