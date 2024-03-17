#include <stdio.h>

int a,b,c;

int main()
{
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;
    printf("Somma: %d\n", c);
    return 0;
}

// stampa è diverso da somma
// mi collego con prima riga a servizi in piu in questo caso di input/output
// in realta os stampa su schermo
// ho bisogno di 3 variabili ma nn come in assembly e diverso per varie architetture ma si astrae in C
// con scanf ed & dico prendi in indirizzo di quella variabile da tastiera
// mentre c = a+b è operazione logica e nn serve &