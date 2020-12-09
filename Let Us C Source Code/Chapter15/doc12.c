/* Demo of union at work */
main( )
{
	union a
	{
		int  i ;
		char  ch[2] ;
	} ;
	union a  key ;

	key.i = 512 ;
	printf ( "\nkey.i = %d", key.i ) ;
	printf ( "\nkey.ch[0] = %d", key.ch[0] ) ;
	printf ( "\nkey.ch[1] = %d", key.ch[1] ) ;
}

