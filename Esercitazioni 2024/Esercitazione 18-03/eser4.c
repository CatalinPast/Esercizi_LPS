#include <stdio.h>
int main ( void )
{
    int x ;
    // legge input
    printf( "inserisci un numero intero\n" );
    scanf( "%d",&x ) ;
    //selezione multipla con switch
    switch ( x )
    {
        case 0:
        printf("zero\n");
        break;
        case 1:
        printf("uno\n");
        break;
        case 2:
        printf("due\n");
        break;
        case 3:
        printf("tre\n");
        break;
        default:
        printf("numero negativo oppure maggiore o uguale a 4\n");
        break;
    }
    return 0 ;
}
/*
 se togli i break stampa tutti i case da quello in cui va tipo zero allora tutti
 meglio di if a cascata
*/