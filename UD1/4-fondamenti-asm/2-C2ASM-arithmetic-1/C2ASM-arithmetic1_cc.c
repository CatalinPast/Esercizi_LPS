// fatto da prof

/*
	LPS Example

	C to ASM: Arithmetic 1

	Language: C99
 	Style: concise C
 	Version: Ref-cc
 */

/*
	Original C Code
*/

/*
	Problem statement: transform a C program in an equivalent program
		in MIPS32-MARS and MC68000-ASM0
 */

/*
	Important point: in this example, all variables should have non-negative values
*/

#include <stdio.h>

// symbolic constant
#define CONST1 78
#define CONST2 27257

int s1 = 24, s2, s3, s4 = 8118;

int main( void ) {

// step 1: read an input (for the program to behave correctly, 
// insert a value n such that 40 < n < 200)
	scanf( "%d", &s2 );

// step 2: compute product and quotient, side effects on s1
	s3 = CONST1 * --s1 - s4 / s2;

// step 3: compute quotient, composite assignment
	s1 += ( CONST2 - s4 ) / ( CONST1 + 13 );

// step 4: embedded assignment, side effect on s3,
//	a reminder and a quotient
	s4 -= ( s1 = s4 % s2 - 2 ) - CONST2 / ( 5 + s3++ ); 

// step 5: print all variables
	printf( "s1 <- %d, s2 <- %d, s3 <- %d, s4 <- %d\n", 
			s1, s2, s3, s4 );

	return 0;
}

/*

Test Run
Input: 42
Output: s1 <- 10, s2 <- 42, s3 <- 1602, s4 <- 8124

*/
