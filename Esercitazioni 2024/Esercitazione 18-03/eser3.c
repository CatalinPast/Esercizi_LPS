#include <stdio.h>
int a ;
int main ( void )
{
    scanf( "%d",&a ) ;
    if ( a == 0 )
        printf ("zero") ;
    else if( a % 2 == 0 ) printf("pari") ;
    else printf("dispari") ;
    
    return 0 ;
}