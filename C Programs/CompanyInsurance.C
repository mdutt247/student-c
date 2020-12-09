/**
The company insured its drivers

1. If the driver is married
2. if the driver is unmarried, male and above 30 yrs of age
3. If the driver is unmarried, female and above 25 yrs of age

In all other cases the drivers is not insured. If the marrital status, gender and age of the driver are the inputs
write the program to determine whether the driver is insured now or not

**/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
    int age;

    char mstatus, gender;

    printf("Enter your age: ");

    scanf("%d",&age);


    printf("\nEnter your gender (M/F): ");

    scanf("%c",&gender);


    printf("\nEnter your marital status (M/U): ");

    scanf("%c",&mstatus);


    printf("\nM Status: %c",mstatus);
    printf("\nGender: %c",gender);

    if(mstatus=='M')
    {
        printf("Driver is insured!");
    }

    else if(mstatus=='U' && gender=='M' && age>30)
    {
        printf("Driver is insured!");
    }

    else if(mstatus=='U' && gender=='F' && age>25)
    {
        printf("Driver is insured!");
    }

    else
    {
        printf("\nDriver is not insured!");
    }

    return 0;
}
