.text 0x400000

.eqv CONST1 78
.eqv CONST2 27257

# s1 - s1
# s2 - s2
# s3 - s3
# s4 - s4

# t1 - t1
# t2 - t2

li $s1 , 24
li $s4 , 8118

# scanf( "%d", &s2 );
li $v0 , 5
syscall
move $s2 , $v0

#    s1 -= 1 ;
#    s3 = CONST1 * s1 ;
#    int t1 ;
#    t1 = s4 / s2 ;
#    s3 = s3 - t1 ;
sub $s1 , $s1 , 1
mul $s3 , $s1 , CONST1
div $t1 , $s4 , $s2
sub $s3 , $s3 , $t1

#    t1 = CONST2 - s4 ;
#    int t2 ;
#    t2 = CONST1 + 13 ;
#    t1 /= t2 ;
#    s1 += t1 ;
li $t1 , CONST2
sub $t1 , $t1 , $s4
li $t2 , CONST1
add $t2 , $t2 , 13
div $t1 , $t1 , $t2
add $s1 , $s1 , $t1

#    s1 = s4 % s2 ;
#    s1 -= 2 ;
#    t1 = CONST2 ;
#    t2 = 5 + s3 ;
#    s3 += 1 ;
#    t1 /= t2 ;
#    t2 = s1 - t1 ;
#    s4 -= t2 ;
div $s4 , $s2
mfhi $s1
sub $s1 , $s1 , 2
li $t1 , CONST2
add $t2 , $s3 , 5
add $s3 , $s3 , 1
div $t1 , $t1 , $t2
sub $t2 , $s1 , $t1
sub $s4 , $s4 , $t2

#     printf( "s1 <- %d, s2 <- %d, s3 <- %d, s4 <- %d\n", 
#			s1, s2, s3, s4 );
li $v0 , 1

move $a0 , $s1
syscall

# spazio printa

move $a0 , $s2
syscall

# spazio printa

move $a0 , $s3
syscall

# spazio printa

move $a0 , $s4
syscall
























