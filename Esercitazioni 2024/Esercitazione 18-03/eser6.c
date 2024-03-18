#include <stdio.h>
int main ()
{
    int a = 9,b = 11,c;
    if ( (a<10) && (b>10) )
    // (a<10) && (b=10)
    // == ma con (b>10)
    {
        printf("hello world") ;
    }
    c = (a<10) ? 0 : 1 ;
    // uguale a (a<10) && (c=0) , (a<10) || (c=1)
    // a parziale magari tipo con anche == ma a fine (c++) invece di (c=1)
    // ricorda ordine definito solo per logici operatori
    //overleaf inserisci codice e ottienei robe v parziale 0 lab di prog sis
    printf("%d\n",c) ;
    return 0 ;
}
/*
 gli posso togliere corpo a if e conmando nullo o tipo anche togliere if e fare solo quella cosa valutazione logica e basta poi nn fa nulla
 compare negli assembly ce nei processori tabella pk se nn hai memoria nn ci sono operatori relazionali v
 compare è sottrazione finta trick tipo a-b se risultato negativo allora flag negativo e vuol dire che a<b ecc. ecc. uguaglianza se 0 ecc.
 c++ > qualcosa a parziale v
*/