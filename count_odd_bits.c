#include <stdio.h>

int count_odd_bits(unsigned long);

int main() {
	unsigned long x = 0; /*the number to count odd on bits in*/
	unsigned long result = 0; /*will hold the amount of odd unsigned bits*/ 
	printf("Please enter a number to count the amount of on bits in odd indexes in:\n");
	scanf("%lu", &x); /*gets the number to count odd on bits in*/
	result = count_odd_bits(x); /*gets the result*/
	printf("The number of on bits in odd indexes in your number is: %lu\n", result); /*prints the result*/
	return 0;
} /*end of main*/

int count_odd_bits(unsigned long n) {
	int count = 0; /*counts the amount of odd unsigned bits*/
	for (n = n >> 1; n > 0; n = n >> 2) /*for each odd bit*/
		if (n % 2 == 1)					/*check if its on*/
			count++;					/*if it is, add 1 to count*/
	return count; /*return the amount of odd unsigned bits*/
} /*end of count_odd_bits*/