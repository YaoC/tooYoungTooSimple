// if ( x )
// is equivalent to
// if ( x != 0 )
// '0'== 0 -> False
// NULL == 0 -> True 
#include "stdio.h"
char fun( char x, char y )
{
	if ( x )
	return(y);
	else return NULL;
}


int main()
{
	// output: 2
	int a = '0', b = '1', c = '2';

	// output: NULL
	// int a = 0, b = '1', c = '2';
	printf( "%c\n", fun( fun( a, b ), fun( b, c ) ) );
	return 0;
}
