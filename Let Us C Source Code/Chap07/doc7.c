/* Macros with arguments */
/* Program to test whether entered character is digit */
#define ISDIGIT(y) ( y >= 48 && y <= 57 )
main( )
{
	char  ch ;

	printf ( "Enter any digit " ) ;
	scanf ( "%c", &ch ) ;

	if ( ISDIGIT ( ch ) )
		printf ( "\nYou entered a digit" ) ;
	else
		printf ( "\nIllegal input" ) ;
} 
