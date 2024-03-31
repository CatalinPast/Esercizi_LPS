// for 3 blocchi primo a inizio secondo è condizione di uscita e terzo è eseguito a fine di ogni iterazione
// for di solito matrici e vettori pk sai fine INFATTI while a progetto perche nn sapevamo quando
// prima del while condizione va a inizio condizione del wgile va al centro e statement alla fine va a terzo blocco del for
// puoi anche lasciare come a while e primo blocco vuoto
#include <stdio.h>
#define FINE 0
int x , y ;
int main ( void )
{
    scanf ( "%d" , & x ) ;
    y = 0 ;
    for ( ; x > 0 ; y=y*10+x%10 , x /= 10 ) ;
    printf ( "%d" , y ) ;
    return FINE ;
}