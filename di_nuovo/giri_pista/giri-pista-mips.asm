.text 0x400000

#define SPEED 14
#define ERROR 103
#define LENGTH 523
.eqv SPEED 14
.eqv ERROR 103
.eqv LENGTH 523

#int time , space , laps , gap ;
# time t1
# space t2
# laps t3
# gap t4

#scanf ( "%d" , &time ) ;
li $v0 , 5
syscall
move $t1 , $v0

#space = time - ERROR ;
sub $t2 , $t1 , ERROR

#space = space * SPEED ;
mul $t2 , $t2 , SPEED

#laps = space / LENGTH ;
#gap = space % LENGTH ;
li $t3 , LENGTH
div $t2 , $t3
mflo $t3
mfhi $t4

#printf ( "%d %d" , laps , gap ) ;
li $v0 , 1
move $a0 , $t3
syscall

#printa spazio

#li $v0 , 1
move $a0 , $t4
syscall



























