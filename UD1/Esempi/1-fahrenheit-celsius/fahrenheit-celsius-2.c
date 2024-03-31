#include <stdio.h>
// C = 5/9 * ( F - 32 );
#define CONGELAMENTO_SCALA_F 32
#define AMPIEZZA_GRADI 5.0f / 9.0f
float F , C;
int main ( void )
{
    printf( "immettere un valore di temperatura in scala fahrenheit.\n" ) ;
    scanf( "%f", &F ) ;
    C = AMPIEZZA_GRADI * ( F - CONGELAMENTO_SCALA_F ) ;
    printf( "il corrispondente valore in scala celsius è : %f.",C ) ;
    return 0 ;
}