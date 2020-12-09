//To check string palindrome or not

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
    char data[80];


    int len=-1,begin,strsize,i,j,flag=0,n;

    printf("Enter a string: ");
    gets(data);
    printf("\nString Given: %s",data);

    strsize=strlen(data);

    printf("\nString Size: %d",strsize);

    n=strsize-1;

    for(i=0; i<=strsize; i++)
    {


        if(data[i]==data[n])
       {
         flag=flag+1;

       }

       else
       {
           flag=flag-1;
       }

        n--;
    }

    if(flag==strsize+1)
    {
        printf("\n\n%s is a Palindrome!\n",data);
    }

    else
    {
        printf("\n\n%s is NOT a Palindrome!\n",data);
    }


    return 0;
}


