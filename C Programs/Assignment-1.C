//Assignment 1: Explain all operators with the help of a C Program.
//Submission Date: 1/2/13
//By Venkatesh

#include<stdio.h>
#include<conio.h>

int main()
{
int askme;

printf("-------\nAssignment 1: Explain all operators with the help of a C Program.\nSubmission Date: 1/2/13\nBy Venkatesh Vaasudhevan\n-------");
printf("\n\nPlease choose any of the following operators:\n");
printf("1. Arithmetic Operators\n2. Logical or Relational Operators\n3. Bitwise Operators\n4. Assignment Operators\n5. Misc Operators\n\nEnter: ");

scanf("%d",&askme);

switch(askme)
{
    case 1:
    {
    int a = 21;
    int b = 10;
    int c ;
    printf("\n**Arithmetic Operators**\n\nDeclared A=21 and B=10. Finding C using various operators.\n");
    c = a + b;
    printf("+ Value of c is %d\n", c );
    c = a - b;
    printf("- Value of c is %d\n", c );
    c = a * b;
    printf("* Value of c is %d\n", c );
    c = a / b;
    printf("/ Value of c is %d\n", c );
    c = a % b;
    printf("%% Value of c is %d\n", c );
    c = a++;
    printf("++ Value of c is %d\n", c );
    c = a--;
    printf("-- Value of c is %d\n", c );
    }
break;


    case 2:
    {
    int a = 21;
   int b = 10;
   int c ;
    printf("\n**Logical or Relational Operators**\n\nDeclared A=21 and B=10. Comparing A and B using various operators.\n");
   if( a == b )
   {
      printf("== a is equal to b\n" );
   }
   else
   {
      printf("!= a is not equal to b\n" );
   }
   if ( a < b )
   {
      printf("<  a is less than b\n" );
   }
   else
   {
      printf(">  a is not less than b\n" );
   }
   if ( a > b )
   {
      printf(">  a is greater than b\n" );
   }
   else
   {
      printf("<  a is not greater than b\n" );
   }
   /* Lets change value of a and b */
   printf("\nDeclared A=5 and B=20. Comparing A and B using various operators.\n");
   a = 5;
   b = 20;
   if ( a <= b )
   {
      printf("<=  a is either less than or euqal to  b\n" );
   }
   if ( b >= a )
   {
      printf(">=  b is either greater than  or equal to b\n" );
   }
   if ( a && b )
   {
      printf("&&  Condition is true\n" );
   }
   if ( a || b )
   {
      printf("||  Condition is true\n" );
   }
   /* Again lets change the value of  a and b */
   printf("\nDeclared A=0 and B=10. Comparing A and B using various operators.\n\n");
   a = 0;
   b = 10;
   if ( a && b )
   {
      printf("&&  Condition is true\n" );
   }
   else
   {
      printf("&&  Condition is not true\n" );
   }
   if ( !(a && b) )
   {
      printf("!&& Condition is true\n" );
   }
    }

    break;

    case 3:
    {
    printf("\n**Bit-Wise Operators**\n\nDeclared A=60 and B=13. Finding C using various operators.\n\n");
    unsigned int a = 60;	/* 60 = 0011 1100 */
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;

   c = a & b;       /* 12 = 0000 1100 */
   printf("& - Value of c is %d\n", c );

   c = a | b;       /* 61 = 0011 1101 */
   printf("| - Value of c is %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("^ - Value of c is %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   printf("~ - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("<< - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf(">> - Value of c is %d\n", c );
    }

    break;

    case 4:
    {
    printf("\n**Assignment Operators**\n\nDeclared A=21. Finding C using various operators.\n\n");
    int a = 21;
   int c ;

   c =  a;
   printf("=  Operator Example, Value of c = %d\n", c );

   c +=  a;
   printf("+= Operator Example, Value of c = %d\n", c );

   c -=  a;
   printf("-= Operator Example, Value of c = %d\n", c );

   c *=  a;
   printf("*= Operator Example, Value of c = %d\n", c );

   c /=  a;
   printf("/= Operator Example, Value of c = %d\n", c );

   c  = 200;
   c %=  a;
   printf("%= Operator Example, Value of c = %d\n", c );

   c <<=  2;
   printf("<<= Operator Example, Value of c = %d\n", c );

   c >>=  2;
   printf(">>= Operator Example, Value of c = %d\n", c );

   c &=  2;
   printf("&= Operator Example, Value of c = %d\n", c );

   c ^=  2;
   printf("^= Operator Example, Value of c = %d\n", c );

   c |=  2;
   printf("|= Operator Example, Value of c = %d\n", c );

    }

    break;

    case 5:
    {
        int a;
   short b;
   double c;
   char d[10];
    printf("\n**Misc. Operators**\n\nComputing SizeOf using operators.\n\n");
   printf("Size of variable a = %d\n", sizeof(a) );
   printf("Size of variable b = %d\n", sizeof(b) );
   printf("Size of variable c= %d\n", sizeof(c) );
   printf("Size of variable d= %d\n", sizeof(d) );


    }

    break;

    default:
    {
        printf("Invalid Option!");
    }
}
getch();
return 0;
}
