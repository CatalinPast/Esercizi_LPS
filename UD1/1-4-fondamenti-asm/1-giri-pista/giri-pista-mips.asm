.text 0x400000

##define ERROR 103
##define SPEED 14
##define LENGTH 523

# come le define ordine di simbolo e numero e anche su mc solo che prima di istruziione va simbolo li
.eqv ERROR 103
.eqv SPEED 14
.eqv LENGTH 523

# time to t0
# laps to t1
# gap to t2
# space to t3

#scanf ( "%d" , & time ) ;
li $v0 , 5
syscall
move $t0 , $v0

#space = time - ERROR ;
sub $t3 , $t0 , ERROR

#space *= SPEED ;
mul $t3 , $t3 , SPEED

#laps = space / LENGTH ;
li $t1 , LENGTH
div $t3 , $t1
#gap = space % LENGTH ;
# osserva riga in piu per ste cose tipo remainder e quoziente accoppiati cosi ottimizzi
mflo $t1
mfhi $t2

#printf ( "%d %d" , laps , gap ) ;
li $v0 , 1
move $a0 , $t1
syscall
li $v0 , 1
move $a0 , $t2
syscall

















