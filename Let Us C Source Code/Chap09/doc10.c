/* Program to copy string without changing source string */
main( )
{
	char  source[ ] = "Sayonara" ;
	char  target[20] ;

	xstrcpy ( target, source ) ;
	printf ( "\nsource string = %s", source ) ;
	printf ( "\ntarget string = %s", target ) ;
}

void xstrcpy ( char *t, const char *s )
{
	while ( *s != '\0' )
	{
		*t = *s ;
		s++ ;
		t++ ;
	}
	*t = '\0' ;
}
