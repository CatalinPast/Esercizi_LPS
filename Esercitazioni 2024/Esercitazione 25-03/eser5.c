#include <stdio.h>
int main ( void )
{
    int i , p = 0 ;
    float o = 0 ;
    printf ( "Inserisci un numero: " ) ;
    scanf ( "%d" , & i ) ;
    while ( i >= 0 )
    {
        o = ( o*2 + i ) / 3.0 ;
        p = i ;
        printf ( "%10.2f\n", o ) ;
        printf ( "Inserisci un altro numero %d", p ) ;
        scanf ( "%d" , i ) ;
        // filtro passa basso tipo ma devi ricordare tutti alla fine in somma
    }
    return 0 ;
}
// break quindi esce tipo se un if con break a 50 su 100 iterazioni "spegne" il ciclo ce esce proprio
