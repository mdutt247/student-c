main( )
{
	enum emp_dept 
	{
		assembly, manufacturing, accounts, stores
	} ;
	struct employee
	{
		char  name[30] ;
		int  age ;
		float  bs ;
		enum emp_dept  department ;
	} ;
	struct employee  e ;

	strcpy ( e.name, "Lothar Mattheus" ) ;
	e.age = 28 ; 
	e.bs = 5575.50 ;
	e.department = manufacturing ;

	printf ( "\nName = %s", e.name ) ;
	printf ( "\nAge = %d", e.age ) ;
	printf ( "\nBasic salary = %f", e.bs ) ;
	printf ( "\nDept = %d", e.department ) ; 

	if ( e.department == accounts )
		printf ( "\n%s is an accounant", e.name ) ;
	else
		printf ( "\n%s is not an accounant", e.name ) ;
}
