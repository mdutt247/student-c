#include "stdio.h"
main( )
{
	FILE  *fp ;
	char  ch ;

	fp = fopen ( "TRIAL", "w" ) ;

	while ( !feof ( fp ) )
	{
		ch = fgetc ( fp ) ;
		if ( ferror( ) )
		{
			printf ( "Error in reading file" ) ;
			break ;
		}
		else
			printf ( "%c", ch ) ;
	}

	fclose ( fp ) ;
}
