#include <stdio.h>
int main ()
{
char ch;
printf ("\nEnter Character x,y or z: ");
ch = getchar ();
switch (ch)
 {
  case 'x' : printf ("You Entered x");
             break;
  case 'y' : printf ("You Entered y");
             break;
  case 'z' : printf ("You Entered z");
             break;
  default : printf ("You Didnot Entered x, y or z");

  }
return 0;
}
