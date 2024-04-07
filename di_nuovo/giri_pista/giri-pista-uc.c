#include <stdio.h>

#define SPEED 14
#define ERROR 103
#define LENGTH 523

int time , space , laps , gap ;

int main ( void )
{
    // scanf ( "%d" , time ) ;
    scanf ( "%d" , &time ) ;
    // space = ( time - ERROR ) * SPEED ;
    space = time - ERROR ;
    space = space * SPEED ;
    // laps = space / LENGTH ;
    laps = space / LENGTH ;
    // gap = space % LENGTH ;
    gap = space % LENGTH ;
    // printf ( "%d %d" , laps , gap ) ;
    printf ( "%d %d" , laps , gap ) ;
    // return 0 ;
    return 0 ;
}
