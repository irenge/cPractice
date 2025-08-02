#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	printf("arr[2] = %i\n", arr[2]);

	printf("3[arr] = %i\n", 3[arr]); /* Outputs "3[arr] = 4 "  */


	return 0;
}

