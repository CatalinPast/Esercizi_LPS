// fatto da me

#include <stdio.h>

#define CONST1 78
#define CONST2 27257

int s1 = 24, s2, s3, s4 = 8118;

int main ( void )
{
    // step 1: read an input (for the program to behave correctly,
    // insert a value n such that 40 < n < 200)
    scanf ( "%d",&s2 ) ;

    //s3 = CONST1 * --s1 - s4 / s2;
    //nota : side effect on s1
    s1 = s1 - 1 ; // oppure s1 -= 1 ;
    int t1 ;
    t1 = CONST1 * s1 ;
    //printf("%d",t1); testing per assembly
    int t2 ;
    t2 = s4 / s2 ;
    s3 = t1 - t2 ;


    //s1 += ( CONST2 - s4 ) / ( CONST1 + 13 );
    t1 = CONST2 - s4 ;
    t2 = CONST1 + 13 ;
    t1 /= t2 ;
    s1 += t1 ;

    //s4 -= ( s1 = s4 % s2 - 2 ) - CONST2 / ( 5 + s3++ );
    //nota : side effect su s1 e su s3 ;
    t1 = s4 % s2 ;
    s1 = t1 - 2 ;
    t2 = 5 + s3 ;
    s3 = s3 + 1 ;
    t1 = CONST2  / t2 ;
    t2 = s1 - t1 ;
    s4 -= t2 ;

    printf( "s1 <- %d, s2 <- %d, s3 <- %d, s4 <- %d\n", s1, s2, s3, s4 ) ;

    return 0 ;
}
