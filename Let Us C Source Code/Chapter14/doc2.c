/* File encryption utility */
#include "stdio.h"
main( )
{
	encrypt( ) ;
}

encrypt( )
{
	FILE  *fs, *ft ;
	char   ch ;

	fs = fopen ( "SOURCE.C", "r" ) ;  /* normal file */
	ft = fopen ( "TARGET.C”, "w" ) ;  /* encrypted file */

	if ( fs == NULL || ft == NULL )
	{
		printf ( "\nFile opening error!" ) ;
		exit ( 1 ) ;
	}

	while ( ( ch = getc ( fs ) ) != EOF )
 		putc ( ~ch, ft ) ;

	fclose ( fs ) ;
	fclose ( ft ) ;
}
