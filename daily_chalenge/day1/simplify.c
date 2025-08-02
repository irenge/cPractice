#include <stdio.h>
#include <stdlib.h>

void print(size_t arr[], size_t N)
{
	for (size_t i = 0; i < N; i++) {
		if(i==0)
			printf("[");
		printf("%ld ", arr[i] );
		if( i < (N-1)) {
			printf(",");
		} else {
			printf("]\n");
		}
	}
}


int main()
{
	size_t x[] = {1, 2, 3, 4, 5,6,7,8,9};

	size_t s = sizeof(x)/sizeof(size_t);
	printf("\nArray :");
	print(x, s);

	size_t y[s];

	printf("Size is %ld",s);

	size_t  p = 1;

	for(size_t i = 0; i < s; i++)
		p = p* (x[i]);


	printf("\nProduct is %ld\n",p);


	size_t *r; 

	r = malloc( s * sizeof( size_t ) );

	for (size_t i = 0; i < s; i++) 
		r[i] = p / (x[i]);

	printf("\n Resulting array [ ");
	for (size_t i = 0; i < s; i++) {
		printf("%ld",r[i]);
		if (i < (s - 1)) {
			printf(",");
		} else {
			printf("]\n");
		}
	}

	free(r);

	return 0;
}
