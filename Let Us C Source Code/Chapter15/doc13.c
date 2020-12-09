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

	key.ch[0] = 50 ;  /* assign a new value to key.ch[0] */
	printf ( "\nkey.i = %d", key.i ) ;
	printf ( "\nkey.ch[0] = %d", key.ch[0] ) ;
	printf ( "\nkey.ch[1] = %d", key.ch[1] ) ;
}
