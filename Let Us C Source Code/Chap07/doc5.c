/* # define statement used to replace entire C statement */
#define FOUND printf ( "The Yankee Doodle Virus" ) ;
main( )
{
	char  signature ;

	if ( signature == 'Y' ) 
		FOUND
	else
		printf ( "Safe... as yet !" ) ;
}

