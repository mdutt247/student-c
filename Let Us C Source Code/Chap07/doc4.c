/* Nested macros */
#define AND &&
#define ARANGE ( a > 25 AND a < 50 )
main( )
{
	int  a = 30 ;

	if ( ARANGE )
		printf ( "within range" ) ;
	else
		printf ( "out of range" ) ;
}
