// soluzione al problema in stile :
// UC
#include <stdio.h>
#define SPEED 14
#define ERROR 103
#define LENGTH 523
int time, space, laps, gap;
int main ( void )
{
    scanf ( "%d",&time ) ;
    int t1 ;
    t1 = time - ERROR ;
    // oppure time -= ERROR
    // e poi space = time * SPEED
    space = t1 * SPEED ;
    laps = space / LENGTH ;
    gap = space % LENGTH ;
    printf ( "%d %d\n" , laps , gap );
    return 0 ;
}