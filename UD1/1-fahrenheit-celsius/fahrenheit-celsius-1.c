#include <stdio.h>
// C = 5/9 * ( F - 32 );
#define CONGELAMENTO_SCALA_F 32
#define AMPIEZZA_GRADI 5.0f / 9.0f
float F = 202.0f , C;
int main ( void )
{
    C = AMPIEZZA_GRADI * ( F - CONGELAMENTO_SCALA_F );
    printf( "%f",C );
    return 0;
}