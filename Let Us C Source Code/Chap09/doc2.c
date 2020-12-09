/* Program to demonstrate printing of string */
main( )
{
	char  name[ ] = "Klinsman" ;
	int  i = 0 ;

	while ( name[i] != `\0' )
	{
		printf ( "%c", name[i] ) ;
		i++ ;
	}
}
