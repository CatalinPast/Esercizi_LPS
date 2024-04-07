#include <stdio.h>

#define ERROR 103
#define SPEED 14
#define LENGTH 523
#define FINE 0

int time , laps , gap ;
int space ;

int main ( void )
{
    scanf ( "%d" , & time ) ;
    space = time - ERROR ; //uso space in modo che nn serva variabile temporanea
    space *= SPEED ;
    laps = space / LENGTH ;
    gap = space % LENGTH ;
    printf ( "%d %d" , laps , gap ) ;
    return FINE ;
}