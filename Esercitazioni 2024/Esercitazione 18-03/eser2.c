#include <stdio.h>
int a ;
int main ( void )
{
    /*
    scanf( "%d",&a ) ;
    if ( a % 2 == 0 )
    {
        printf("pari") ;
    } else
    {
        printf("dispari") ;
    }
    return 0 ;
    */
   ternario() ;
   return 0 ;
}
int ternario( void )
{
    scanf( "%d",&a ) ; // dato che scanf è funzione che modifica a devi darlgi nn solo valore pk nn ci fa nulla ma indirizzo gli dai cosi sa dove andare a scrivere nella locazione di memoria ecc.
    a % 2 == 0 ? printf("pari") : printf("dispari") ;
    return 0 ;
}
/*
 teorema di bohm coso li
 su matlab ecc. è compliato creare il while ecc.
 linguaggio procedurale quindi tutto è una procedura visto come e composta da altre procedure ecc.
 il lavoro principale è da fare della funzione main

*/