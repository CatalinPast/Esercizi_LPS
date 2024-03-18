
    .text	0x400000
    li	$t5,20
l1:
    li $t2,0xa0b0c0d0
    move $t4,$t2
    lui $t4,0x1234
    move $t2,$t1
l2:
    lui $t7,0x4321
l3: lui $t0,0x1234

    mthi $t7
    mfhi $t2
