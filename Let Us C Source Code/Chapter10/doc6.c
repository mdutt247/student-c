main( )
{
	struct address
	{
		char  phone[15] ;
		char  city[25] ;
		int  pin ;
	} ;

	struct emp
	{
		char  name[25] ;
		struct address  a ;
	} ;
	struct emp  e = { "jeru", "531046", "nagpur", 10 }; 

	printf ( "\nname = %s phone = %s", e.name, e.a.phone ) ;
	printf ( "\ncity = %s pin = %d", e.a.city, e.a.pin ) ;
}
