
main( )
{
	int  *p ;
	int  *fun( ) ;	 

	p = fun ( ) ;
}

int  *fun( )
{
	int  i = 20 ;
	return ( &i ) ;
}
