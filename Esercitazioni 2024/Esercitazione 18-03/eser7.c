#include <stdio.h>
int a = 5 ;
int main ( void )
{
    printf ( "WHILE\n" ) ;
    a = 5;
    while ( a>0 )
    {
        printf("valore : %d\n",a--) ;
        // si interromperà quando raggiungerà 0 da dove inizializzata var a
    }
    printf("DO-WHILE\n",a--) ;
    a = 5;
    do
    {
        printf("valore : %d\n",a--) ;

    } while (a > 0) ;
    printf("FOR\n") ;
    //for (a = 5;)
    return 0 ;
}
// un solo valore esiste per cui nn stampano la stessa cosa se no sempre stessa cosa tutti e tre valore negativo o 0??
// per mostrare tranelli ecc.
// do while cia in testa il corpo e dopo la condizione il contrario del while
// si devono comportare bene in tutti i casi come discreta 1
//come fare a fare do while uguale con gli altri 2??
//qunado progetti compilatore e tutto potrebbe fare questi ragionamenti
