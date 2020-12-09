/* Usage of pointer to an array */
main( )
{
	int  s[5][2] = {
					{ 1234, 56 },
					{ 1212, 33 },
					{ 1434, 80 },
					{ 1312, 78 }
		     } ;		
	int  ( *p )[2] ;
	int  i, j, *pint ;
	
	for ( i = 0 ; i <= 3 ; i++ )
	{
 		p = &s[i] ;
		pint = p ;
		printf ( "\n" ) ;
		for ( j = 0 ; j <= 1 ; j++ )
			printf ( "%d ", *( pint + j ) ) ; 
	}
}
