#include <stdio.h>
int main ()
{
    int n ;
    printf ("inserisci un numero intero (n) :\n") ;
    scanf ("%d",&n);
    printf ("se n è pari n*2 se dispari n^2 : %d\n",(n % 2 == 0 ? n*2 : n*n)) ;
    
    return 0 ;
}
/*
 stile conciso operatori messi in altri operatori
*/