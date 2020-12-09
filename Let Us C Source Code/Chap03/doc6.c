/* odd loop using a while loop */
main( )
{
	char  another = 'y' ;
	int  num ;

	while ( another == 'y' )
	{
		printf ( "Enter a number " ) ;
		scanf ( "%d", &num ) ;
		printf ( "square of %d is %d", num, num * num ) ;
		printf ( "\nWant to enter another number y/n " ) ;
		scanf ( " %c", &another ) ;
	}
}

