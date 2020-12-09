#include <stdio.h>
int main()
{
 int n, r, t;

 printf("Please enter a number: ");
 scanf("%d",&n);

 t=n;
 for(r=0;n>0;n=n/10)
 {
  r = r * 10;
  r = r + n%10;
 }

 if(t==r)
  printf("Number is Palindrome");
 else
  printf("Number is not Palindrome");

 return 0;
}
