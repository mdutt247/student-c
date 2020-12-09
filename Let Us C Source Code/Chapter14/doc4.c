main( )
{
	int  i = 5225, j, k ;

	printf ( "\nDecimal %d is same as ", i ) ;
	showbits ( i ) ;

	for ( j = 0 ; j <= 4 ; j++ )
	{
		k = i <<j ;
		printf ( "\n%d left shift %d gives ", i, j ) ;
		showbits ( k ) ;
	}
}
