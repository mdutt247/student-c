#define MALE 0 ;
#define FEMALE 1 ;
#define SINGLE 0 ;
#define MARRIED 1 ;
#define DIVORCED 2 ;
#define WIDOWED 3 ;

main( )
{
	struct employee
	{ 
		unsigned  gender : 1 ;
		unsigned  mar_stat : 2 ;
		unsigned  hobby : 3 ;
		unsigned  scheme : 4 ;
	} ;
	struct employee  e ;

	e.gender = MALE ; 
	e.mar_status = DIVORCED ;
	e.hobby = 5 ;
	e.scheme = 9 ;

	printf ( "\nGender = %d", e.gender ) ;
	printf ( "\nMarital status = %d", e.mar_status ) ;
	printf ( "\nBytes occupied by e = %d", sizeof ( e ) ) ;
}
