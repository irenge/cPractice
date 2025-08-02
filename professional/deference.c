#include <stdio.h>
int main(void) {
	int x = 3;
	int *p = &x;
	printf("%p = %p\n", (void *)&x, (void *) p); /* Outputs A = A ", for some implementation defined A. */

	x = 42;
	printf("x = %d, *p = %d\n", x, *p); /* Outputs "x = 42, *p = 42" */

	*p = 123;
	printf("x = %d, *p = %d\n", x, *p); /* Outputs x = 3, *p = 123 */

	return 0;
}

