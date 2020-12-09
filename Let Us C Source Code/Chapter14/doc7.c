main( )
{
	int  b = 50 ;

	b = b ^ 12 ;
	printf ( "\n%d", b ) ;  /* this will print 62 */

	b = b ^ 12 ;
	printf ( "\n%d", b ) ;  /* this will print 50 */
}
