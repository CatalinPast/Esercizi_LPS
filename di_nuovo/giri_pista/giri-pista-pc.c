#include <stdio.h>

#define SPEED 14
#define ERROR 103
#define LENGTH 523

//descrivo un po algoritmo mentre lo codifico in un programma
//giri di pista completi LAPS
//metri percorsi nell'ultimo giro di pista GAP

int time , space , laps , gap ;

int main ( void )
{
    scanf ( "%d" , &time ) ;
    //printf ( "%d" , time ) ;
    //time 189
    space = (time - ERROR) * SPEED ;
    //printf ( "\n%d %d" , time , space ) ;
    //( 189 - 103 ) * 14 = 1204
    laps = space / LENGTH ;
    //printf ("\n%d %d %d" , time , space , laps ) ;
    //1204 / 523 = 2
    gap = space % LENGTH ;
    //printf ("\n%d %d %d %d" , time , space , laps , gap) ;
    //1204 % 523 = 158
    printf ( "%d %d" , laps , gap ) ;
    //
    return 0;
}
