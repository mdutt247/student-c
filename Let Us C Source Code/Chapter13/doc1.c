#include "stdio.h" 
main ( int  argc, char  *argv[ ] )
{
	FILE  *fs, *ft ;
	char  ch ;

	if ( argc != 3 )
	{
		puts ( "Improper number of arguments" ) ;
		exit( ) ;
	}

	fs = fopen ( argv[1], "r" ) ;
	if ( fs == NULL )
	{
		puts ( "Cannot open source file" ) ;
		exit( ) ;
	}

	ft = fopen ( argv[2], "w" ) ;
	if ( ft == NULL )
	{
		puts ( "Cannot open target file" ) ;
		fclose ( fs ) ;
		exit( ) ;
	}

	while ( 1 )
	{
		ch = fgetc ( fs ) ;

		if ( ch == EOF )
			break ;
		else
			fputc ( ch, ft ) ;
	}

	fclose ( fs ) ;
	fclose ( ft ) ;
}
