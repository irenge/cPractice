#include <stdio.h>
int main() 
{

	for (int k = 1; k < 10; printf("\%d\\n", k), k += 2);
	printf("\n");	
	for (int k = 1; k < 10; printf("%d\n", k), k += 2); /* output odd number below 9 */

	/* Outputs sum to first 9 natural numbers */
	for (int sumk = 1, k = 1; k < 10; k++, sumk += k)
		printf("\%5d\%5d\\n", k, sumk);

	return 0;
}


