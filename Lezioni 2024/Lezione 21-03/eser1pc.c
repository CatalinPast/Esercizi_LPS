// soluzione al problema giri pista in stile :
// PC
#include <stdio.h>
#define SPEED 14
#define ERROR 103
#define LENGTH 523
// costanti simboliche
// tempo nn t pk da matematici
// plain C solution a problema di giri pista con cronometro difettoso
int time, space, laps, gap;
int main ( void )
{
    scanf ( "%d",&time );
    space = ( time - ERROR ) * SPEED;
    laps = space / LENGTH;
    gap = space % LENGTH;
    printf ( "%d %d\n" , laps , gap );
}
// molto piu semplici se metti error basta che li se hai errore correggi facile se no in tutto
// programma se era lungo era tantissimo tempo per trovare errore!!!!! se mettevi numeretti dappertutto ceh alla fine era lo stesso