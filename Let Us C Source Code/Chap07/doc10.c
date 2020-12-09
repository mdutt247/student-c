/* Use of # pragma */
/* Pogram to supress specific warning */
#pragma warn -rvl	/* return value */
#pragma warn -par	/* parameter not used */ 
#pragma warn -rch	/* unreachable code */

int  f1( )
{
	int  a = 5 ;
}

void  f2 ( int  x )
{
	printf ( "\nInside f2" ) ;
}

int  f3( )
{
	int  x = 6 ;
	return x ;
	x++  ;
}

void  main( )
{
	f1( ) ;
	f2 (  7 ) ;
	f3( ) ;
}
