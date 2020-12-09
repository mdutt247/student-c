#pragma pack(1)
struct emp
{	
	int a ;	
	char ch ;
	float s ;	
} ; 
#pragma pack( )

struct emp e ;
printf ( "%u %u %u", &e.a, &e.ch, &e.s ) ;

