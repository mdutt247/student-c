/* A look-alike of the function strlen( ) */ 
main( )
{
	char  arr[ ] = "Bamboozled" ;
	int  len1, len2 ;

	len1 = xstrlen ( arr ) ;
	len2 = xstrlen ( "Humpty Dumpty" ) ;

	printf ( "\nstring = %s length = %d", arr, len1 ) ;
	printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ;
}

xstrlen ( char  *s )
{
	int  length = 0 ;

	while ( *s != '\0' )
	{
		length++ ;
		s++ ;
	}

	return ( length ) ;
} 
