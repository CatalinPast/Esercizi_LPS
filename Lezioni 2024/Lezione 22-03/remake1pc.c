// capi prima soluzione quindi algoritmo e codifichi in un programma c plain c
// secondo step che modifichi programma per farlo piu leggibile e bello con costanti simboliche se nn lo riesci a fare subito insomma
// terzo step traduzione in UC
// quarto step traduzione in mips o contrario con quinto
// quinto step traduzione in mc68k o contrario con quarto

//PRIMA FASE
/*
#include <stdio.h>
int time , laps , gap ;
int space ;
int main ( void )
{
    scanf ( "%d" , & time ) ;
    space = ( time - 103 ) * 14 ;
    laps = space / 523 ;
    gap = space % 523 ;
    printf ( "%d %d" , laps , gap ) ;
    return 0;
}
*/

//SECONDA FASE
// più elegante cosi però e nn solo piu elegante ma se sbagli hai un solo punto in cui controllare ecc. ecc. : FASE2
#include <stdio.h>
#define ERROR 103
#define SPEED 14
#define LENGTH 523
#define FINE 0 // che figooooooooo
int time , laps , gap ;
int space ;
int main ( void )
{
    scanf ( "%d" , & time ) ;
    space = ( time - ERROR ) * SPEED ;
    laps = space / LENGTH ;
    gap = space % LENGTH ;
    printf ( "%d %d" , laps , gap ) ;
    return FINE;
}
