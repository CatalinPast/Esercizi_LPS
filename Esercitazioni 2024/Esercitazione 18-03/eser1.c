#include <stdio.h>
#include <limits.h>
int main( void )
{
    printf( "Tipi di variabili e loro formati in byte : \n" ) ;
    printf( "------------------------------------------" ) ;
    printf( "Tipo\t\tFormato ( byte ) \t\t Limite inferiore \t Limite superiore\n" ) ;
    printf( "------------------------------------------" ) ;
    printf( "char\t\t\t %2ld \t %20d \t %20d\n",sizeof(char),CHAR_MIN,CHAR_MAX ) ;
    printf( "unsigned char",sizeof(unsigned char) ) ;
    printf( "short",sizeof(short),0,SHRT_MIN,SHRT_MAX ) ;
    printf( "unsigned short",sizeof(unsigned short) ) ;
    printf( "int",sizeof(int) ) ;
    printf( "unsigned int \t\t %21d \t %20u \t %20u\n",sizeof(unsigned int) ) ;
    printf( "long",sizeof(long) ) ;
    printf( "unsigned long",sizeof(unsigned long),0 ) ;
    printf( "long long",sizeof(long long),0,LONG_LONG_MAX ) ;
    printf( "unsigned long long \t %21d \t %20d \t %20llu\n",sizeof(unsigned long long),0,ULONG_MAX ) ;
    printf( "------------------------------------------" ) ;
    return 0 ;
}
/*
 and e or puoi rifarli con prodotto e somma
 processore fa and e or bit a bit pero , che ancora piu semplice
 registri stack e program counter e tutto da architettura e un altro registro di stato
 flag alzata tipo se ultimo risultato era negtivo o se ce stato overflow ecc.
 registro di stato fa questo alza flag di queste cose o di overflow ecc.
 finta sottrazione aggiorna registro di stato nn fa sottrazione vera e aggiorna registro di stato
 si ha effetto di avere operatori relazionali grazie a registro di stato e flags
 a - b da negativo o zero o positivo
 in libreria standard C limits.h ecc.
 poi sensibili ad architettura con discorso di endianess pure piu avanti
*/