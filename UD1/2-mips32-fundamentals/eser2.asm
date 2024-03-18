	.text	0x400000
	li $t1,100
	li $t2,0x40
	add $t3,$t2,$t1
	add $t4,$t1,-15
	add $t5,$t2,120000
	add $t5,$t4,$t5
#	add $t6,44,$t1
	sub $t3,$t1,$t2
	sub $t4,$t2,$t1
	mul $t2,$t3,2
	
	li $t3,220000
	li $t6,50122
	mul $t0,$t3,$t6
	mult $t3,$t6
	mfhi $s0
	mflo $s1
	