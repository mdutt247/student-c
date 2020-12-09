main( )
{
	struct a
	{
		int  i ;
		char  c[2] ;
	} ;
	struct b
	{
		int  j ;
		char  d[2] ;
	} ;
	union z
	{
		struct a  key ;
		struct b  data ;
	} ;
	union z  strange ;

	strange.key.i = 512 ;
	strange.data.d[0] = 0 ;
	strange.data.d[1] = 32 ;

	printf ( "\n%d", strange.key.i ) ;
	printf ( "\n%d", strange.data.j ) ;
	printf ( "\n%d", strange.key.c[0] ) ;
	printf ( "\n%d", strange.data.d[0] ) ;
	printf ( "\n%d", strange.key.c[1] ) ;
	printf ( "\n%d", strange.data.d[1] ) ;
}
