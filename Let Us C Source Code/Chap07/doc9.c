/* Use of #pragma */
/* Program to change execution of functions */
void fun1( ) ;
void fun2( ) ;

#pragma startup fun1
#pragma exit fun2

main( )
{
	printf ( "\nInside maim" ) ;
}

void fun1( )
{
	printf ( "\nInside fun1" ) ;
}

void fun2( )
{
	printf ( "\nInside fun2" ) ;
}

