
main( )
{
	int  display( ) ;

	printf ( "\nAddress of function display is %u", display ) ;
	display( ) ;  /* usual way of invoking a function */
}

display( )
{
	puts ( "\nLong live viruses!!" ) ; 
}

