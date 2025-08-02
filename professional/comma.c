#include <stdio.h>
int main() 
{
	int x = 42;
	int y = 44;

	printf("%i\n",(x*=2, y)); /* Output 44 . Note: 1st comma is comma operator, 2nd comma is comma separator*/

	printf("later val of x is %d\n", x);

	return 0;
}


