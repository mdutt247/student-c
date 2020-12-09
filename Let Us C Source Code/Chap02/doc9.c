/* Insurance of driver - without using logical operators */
main( )
{
	char   sex, ms ;
	int   age ;

	printf ( "Enter age, sex, marital status " ) ;
	scanf ( "%d %c %c", &age, &sex, &ms ) ;

	if ( ms == 'M' ) 
		printf ( "Driver is insured" ) ;
	else
	{
		if ( sex == 'M' )
		{
			if ( age > 30 )
				printf ( "Driver is insured" ) ;
			else 
				printf ( "Driver is not insured" ) ;
		}
		else
		{
			if ( age > 25 )
				printf ( "Driver is insured" ) ;
			else 
				printf ( "Driver is not insured" ) ;
		}
	}
}
