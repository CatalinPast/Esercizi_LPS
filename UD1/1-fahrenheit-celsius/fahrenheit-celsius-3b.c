#include <stdio.h>
#define CONGELAMENTO_SCALA_F 32
#define AMPIEZZA_GRADI 5.0f / 9.0f
extern float F , C ;
int main ( void )
{
    C = AMPIEZZA_GRADI * ( F - CONGELAMENTO_SCALA_F ) ;
    printf( "il valore in scala Celsius è : %f", C ) ;
    return 0 ;
}