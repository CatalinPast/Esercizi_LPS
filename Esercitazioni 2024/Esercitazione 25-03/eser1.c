#include <stdio.h>
int x , y ;
int main ( void )
{
    printf ( "Inserisci un numero intero: " );
    scanf ( "%d" , & x ) ;
    y = 0 ;
    // 123 deve diventare 321
    // ti fa capire in memoria in binario cose a basso livello
    // in decimale a contrario
    // 0000 0000 se ho 15 allora 0000 1111
    // e allora 51 0001 1
    int t = 10 ;
    while ( x != 0 ){
        // modulo per prendere numeri
        // 123 % 10 = 3 hai preso l'unità
        y += x % t ; // y = 3 // y = 12 % 100 prende la decina pero
        t = 10 ; // t = 100
        x /= 10 ; // x = 12
        printf( "%d" , y ) ;
    }
    /*
    while ( x != 0 )
        y = y * 10 + x % 10 ;
        x /= 10 ;
    printf ( "Reverse : %d\n" , y ) ;
    */
    return 0 ;
}