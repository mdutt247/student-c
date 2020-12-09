#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,j,count,countc,len,len2,vov,size,cons;
    printf("Enter a string : ");
    gets(str);
    count=0;
    i=0,len=0,len2=0,j=0,vov=0;
    size=sizeof(str);
    len=strlen(str);
    while(str[i]!='\0')
      {
        if(str[i] == ' ')
        count++;
        i++;


      }
      len2=len-count;
    printf("The size of string is %d\n",size);
    printf("The total number of words are %d\n",count+1);
    printf("The total length of the string with space is %d\n",len);
    printf("The total length of the string with out space is %d\n",len2);
    for(j=0;j<=len;j=j+1)
    {
        if(str[j]=='a'||str[j]=='i'||str[j]=='e'||str[j]=='o'||str[j]=='u')
        vov=vov+1;
    }



    printf("The total no vowels are %d\n",vov);
    cons=len2-vov;
    printf("The total no constant are %d\n",cons);



}
