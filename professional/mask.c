#include <stdio.h>
#include <limits.h>
void bit_pattern(int u) {
	int i, x, word;
	unsigned mask = 1;
	word = CHAR_BIT * sizeof(int);
	mask = mask << (word - 1); // shift 1 to the left most position

	for (i = 1; i <= word; i++)
	{
		x = (u & mask) ? 1 : 0; //identify the bit
		printf("%d", x); /* print bit value */
                mask >>= 1; /* shift mask to the right by 1 bit */ 
	}
}

int main(void) {
	for (int i = 0 ; i < 101; i++) {
		printf("%d: ",i);
		bit_pattern(i);
		printf("\n");
	}
	return 0;
}
