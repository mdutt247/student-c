#include <stdio.h>

int string_length(char str[]);

void main(void)
{
   char s1[80], s2[80];
   int length;
   strcpy(s1, "abc");
   strcpy(s2, "Welcome to Morgan State University");

   length=string_length(s1);
   printf("The length of string %s is %d\n", s1, length);

   length=string_length(s2);
   printf("The length of string %s is %d\n", s2, length);
}

int string_length(char str[])
{
   int i;
   for(i=0; i<80; i++)
   {
	 if(str[i]=='\0')
	 {
	    return(i);
	 }
   }
}
