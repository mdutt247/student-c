/* Program to find length of string using strlen() function */
main( )
{
	char  arr[ ] = "Bamboozled" ;
	int  len1, len2 ;

	len1 = strlen ( arr ) ;
	len2 = strlen ( "Humpty Dumpty" ) ;

	printf ( "\nstring = %s length = %d", arr, len1 ) ;
	printf ( "\nstring = %s length = %d", "Humpty Dumpty", len2 ) ;
}
