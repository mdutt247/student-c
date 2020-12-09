/* Using pointer to access array elements */
main( )
{
	char  name[ ] = "Klinsman" ;
	char  *ptr ;

	ptr = name ;  /* store base address of string */

	while ( *ptr != `\0' )
	{
		printf ( "%c", *ptr ) ;
		ptr++ ;
	}
}
