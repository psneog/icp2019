/*
 * prime.c
 *
 *  Created on: 17-Sep-2019
 *      Author: Prabhakar
 */

/**********************************************
 * Program to find N prime numbers.\
 *
 *
 *
 *
 *
 *********************************************/

# include <stdio.h>

int main() {
	int n = 10;				// to find
	int is_prime = 1;		// assume all prime initially
	int i  = 2, j = 1;		// i = 2, 3, .....
							// j = 2, ..... i-1
	printf("Input n: ");
	scanf("%d", &n);


	while (i <= n ) {
	    				// need to test i for prime.
	    j = 2;
	    is_prime = 1;          // initially assume i is prime
	    while (j < i && is_prime) {	  		
		if (i % j == 0) {	// is i divisible by j?
		    is_prime = 0;
		}
		j++;
	    } // inner while 
		
	    if (is_prime) 
		printf("%d ",i);
	    i++;   // move on to the next number
	}
	printf("\nThanks\n");
}



