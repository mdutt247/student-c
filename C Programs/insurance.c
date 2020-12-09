#include<stdio.h>
#include<conio.h>
int main()
{
    int status,age,gender;
    printf("For married enter 1 & for unmarried enter 2");
    printf("\nEnter status: ");
    scanf( "%d",&status);


    if(status==1)
    {
        printf("\nThe Dreiver Is Insured");
    }
    else if(status==2)
    {
        printf("For male enter 1 & for female enter 2");
        printf("\nenter your gender: ");
        scanf("%d",&gender);
        printf("\nEnter age: ");
        scanf("%d",&age);
        if (gender==1 && age>=30)
        {
            printf("The driver Is Insured\n");

        }
        else if(gender==2 && age>=25)
        {
            printf("The driver is insured\n");

        }
        else
        {
            printf("Driver is not insured\n");
        }

    }
    else
    {
        printf("Not Insured ,invalid entry \n");
    }
    return 0;
}
