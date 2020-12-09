
# include "stdarg.h"
main( )
{
	int  max ;
	int findmax ( int, … ) ;

	max = findmax ( 5, 23, 15, 1, 92, 50 ) ;
	printf ( "\nmaximum = %d", max ) ;

	max = findmax ( 3, 100, 300, 29 ) ;
	printf ( "\nmaximum = %d", max ) ;
}

int findmax ( int  tot_num, … )
{
	int  max, count, num ;

	va_list  ptr ;

	va_start ( ptr, tot_num ) ;
	max = va_arg ( ptr, int ) ;

	for ( count = 1 ; count < tot_num ; count++ )
	{
		num = va_arg ( ptr, int ) ;
		if ( num > max )
			max = num ;
	}

	return ( max ) ;
}
