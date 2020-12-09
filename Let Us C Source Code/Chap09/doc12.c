/* Use of strcat() function */
main( )
{
	char  source[ ] = "Folks!" ;
	char  target[30] = "Hello" ;

	strcat ( target, source ) ;
	printf ( "\nsource string = %s", source ) ;
	printf ( "\ntarget string = %s", target ) ;
}
