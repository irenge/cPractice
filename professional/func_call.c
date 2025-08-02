#include <stdio.h>

int myFunction(int x, int y)
{
	return x * 2 + y;
}
int main(void) {
	int (*fn) (int, int) = &myFunction;
	int x = 42;
	int y = 123;
	printf("(*fn)(%i,%i) = %i\n", x, y, (*fn)(x,y));	
	// Another way 
	printf("(*fn)(%i,%i) = %i\n", x, y, fn(x,y));
	return 0;
}
