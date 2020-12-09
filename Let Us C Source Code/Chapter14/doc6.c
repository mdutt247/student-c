/* To test whether a bit in a number is ON or OFF */
main( )
{
	int  i = 65, j ;

	printf ( "\nvalue of i = %d", i ) ;
	j = i & 32 ;

	if ( j == 0 )
		printf ( "\nand its fifth bit is off" ) ;
	else
		printf ( "\nand its fifth bit is on" ) ;

	j = i & 64 ;

	if ( j == 0 )
		printf ( "\nwhereas its sixth bit is off" ) ;
	else
		printf ( "\nwhereas its sixth bit is on" ) ;
} 

