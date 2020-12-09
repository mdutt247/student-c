
main( )
{
	char  *str ;
	char  *copy( ) ;
	char  source[ ] = "Jaded" ;
	char  target[10] ;

	str = copy ( target, source ) ;
	printf ( "\n%s", str ) ;
} 

char  *copy ( char  *t, char  *s )
{
	char  *r ;

	r = t ; 

	while ( *s != '\0' ) 
	{
		*t = *s ;
		t++ ;
		s++ ;
	}

	*t = '\0' ;
	return ( r ) ; 
}
