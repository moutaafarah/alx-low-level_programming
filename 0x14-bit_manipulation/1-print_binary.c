#include "main.h"


void debug_1(unsigned long int n, int length, unsigned long int mask)
{
	printf("Length of %lu (n) is %i ", n, (length + 1));
	printf("and mask (original value 1) ");
	printf("is %lu based ", mask);
	printf("on [length of n - 1] == %i.\n\n", length);
}



void debug_2(unsigned long int n, unsigned long int mask)
{
	printf("Value of n is %lu, ", n);
	printf("value of mask is %lu and ", mask);
	printf("value of [n & mask] is %lu.\n\n", (n & mask));
}


void debug_3(unsigned long int mask)
{
	printf("\nValue of mask is %lu after right shifting by one.\n\n", mask);
}


int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{
		#ifdef DEBUG
		printf("Value of n is %lu before right shifting by one.\n\n", n);
		#endif

		length++;
		n >>= 1; /*shift n to the right by 1*/

		#ifdef DEBUG
		printf("Value of n is %lu after right shifting by one.\n\n", n);
		#endif
	}

	length--;

	return (length);
}


void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) /*create mask based on length of number*/
		mask <<= length; /*shift mask to the left by length*/
	#ifdef DEBUG
	debug_1(n, length, mask);
	#endif

	while (mask > 0)
	{
		#ifdef DEBUG
		debug_2(n, mask);
		#endif

		if (n & mask) /*if n & mask == 1 print 1*/
			_putchar('1');
		else /*else if n & mask == 0 print 0*/
			_putchar('0');

		mask >>= 1; /*shift mask to the right by 1*/

		#ifdef DEBUG
		debug_3(mask);
		#endif
	}
}
