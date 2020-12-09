/* Subtraction of one pointer from another */

main( )
{
	int  arr[ ] = { 10, 20, 30, 45, 67, 56, 74 } ;
	int  *i, *j ;

	i = &arr[1] ;
	j = &arr[5] ;
	printf ( "%d %d", j - i, *j - *i ) ;
}
