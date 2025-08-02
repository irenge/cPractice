#include <stdio.h>
int main(void)
{
	unsigned int a = 29; // 29 = 00011101
	unsigned int b = 48; // 48 = 00110000

	int c = 0;

	// 32 = 00111101
	c = a & b;
	printf("%d & %d =  %d\n", a, b, c);

	c = a | b; // 61 = 00111101
	printf("%d | %d = %d\n", a, b ,c);

	c = a ^ b; // 45 = 00101101
	printf("%d ^ %d = %d\n", a,b,c);

	c = ~a; // -30 = 11100010
	printf("~%d = %d \n", a, c);

	c = a << 2; // 116 = 01110100
	printf("%d << 2 = %d\n", a,c);

	c = a >> 2; /* 7 = 00000111 */
	printf("%d >> 2 = %d\n", a, c);

	return 0;

}





