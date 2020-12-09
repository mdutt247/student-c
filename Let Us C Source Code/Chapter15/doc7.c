/* Invoking a function using a pointer to a function */
main( )
{
	int  display( ) ;
	int  ( *func_ptr )( ) ;

	func_ptr = display ;  /* assign address of function */ 
	printf ( "\nAddress of function display is %u", func_ptr ) ;
	( *func_ptr )( ) ;  /* invokes the function display( ) */
}

int  display( )
{
	puts ( "\nLong live viruses!!" ) ;
}
