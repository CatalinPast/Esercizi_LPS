.text 0x400000

.eqv CONST1 78
.eqv CONST2 27257

# int s1 = 24, s2, s3, s4 = 8118;
li $s1 , 24
# istruzioni tipo clr in mc???
li $s4 , 8118

#  scanf ( "%d",&s2 ) ;
# nn so come si fa ma per ora :
li $s2 , 42 # input ma immesso qui
# puoi vede su documentazione
# AGGIORNAMENTO NO ok imparato a fare v
li $v0 , 5
syscall

# s1 come s1
# s2 come s2
# s3 come s3
# s4 come s4
# t1 come t1
# t2 come t2

#    //s3 = CONST1 * --s1 - s4 / s2;
#    //nota : side effect on s1

#    s1 = s1 - 1 ; // oppure s1 -= 1 ;
sub $s1 , $s1 , 1

#    int t1 ;
# nn so clr tipo

#    t1 = CONST1 * s1 ;
li $t1 , CONST1
mult $t1 , $s1
mflo $t1

#    int t2 ;
# clr

#    t2 = s4 / s2 ;
div $s4 , $s2
mflo $t2

#    s3 = t1 - t2 ;
sub $s3 , $t1 , $t2

# FINE PRIMA PARTE

#    //s1 += ( CONST2 - s4 ) / ( CONST1 + 13 );

#    t1 = CONST2 - s4 ;
li $t1 , CONST2 # RISCHIO
# pk riuso subito t1 nello stesso statement
sub $t1 , $t1 , $s4

#    t2 = CONST1 + 13 ;
# qua si puo fare come in mc68k!??!?!?!?
li $t2 , CONST1 # RISCHIO
# pk nn so se serve qua fare anche clr prima di sta istruzione su tipo in mc68k e quale è qua istruzione equivalente ecc.
add $t2 , $t2 , 13

#    t1 /= t2 ;
#    t1 = t1 / t2 ;
div $t1 , $t1 , $t2

#    s1 += t1 ;
#    s1 = s1 + t1 ;
add $s1 , $s1 , $t1

# FINE SECONDA PARTE

#    //s4 -= ( s1 = s4 % s2 - 2 ) - CONST2 / ( 5 + s3++ );
#    //nota : side effect su s1 e su s3 ;

#    t1 = s4 % s2 ;
div $s4 , $s2
mfhi $t1

#    s1 = t1 - 2 ;
sub $s1 , $t1 , 2

#    t2 = 5 + s3 ;
add $t2 , $s3 , 5

#    s3 = s3 + 1 ;
add $s3 , $s3 , 1

#    t1 = CONST2  / t2 ;
li $t1 , CONST2 # RISCHIO
div $t1 , $t1 , $t2

#    t2 = s1 - t1 ;
sub $t2 , $s1 , $t1

#    s4 -= t2 ;
sub $s4 , $s4 , $t2

#    printf( "s1 <- %d, s2 <- %d, s3 <- %d, s4 <- %d\n", s1, s2, s3, s4 ) ;
# VEDI COME SI FA E TUTTO V
# AGGIORNAMENTO FATTO ma nn so se devo fa tipo ogni volta syscall per tutti i cosi in sto printf???? poi vedi prof v e ricontrolla errorini tipo formato mc68k ecc.
li $v0 , 1
move $a0 , $s1
syscall


# FINE















