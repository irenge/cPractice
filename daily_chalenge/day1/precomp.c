#include <stdio.h>
#include <stdlib.h>

// This function prints the array
/*void print(size_t arr[], int N)
{
	for (int i = 0; i < N; i++) {
		printf("%ld ", arr[i] );
	}
	printf("\n");
}
*/
void print(size_t arr[], size_t N)
{
        for (size_t i = 0; i < N; i++) {
                if(i==0)
                        printf("[");
                printf("%ld", arr[i] );
                if( i < (N-1)) {
                        printf(", ");
                } else {
                        printf("]\n");
                }
        }
}

size_t *prefixArray(size_t *arr, size_t srcSize)
{
	size_t *prefix = malloc(srcSize * (sizeof(size_t)));
	if (!prefix)
	{
		printf("\nFailed to allocate !");
		return NULL ;
	} 
	// Step 1: Create a prefix product array
	prefix[0] = arr[0];  // First element is the same as the first element of arr

	for (int i = 1; i < srcSize; i++) {
		prefix[i] = prefix[i - 1] * arr[i];
	}
	return prefix;
}

size_t *suffixArray(size_t *arr, size_t n)
{
	size_t *suffix = malloc(n * (sizeof(size_t)));
	if (!suffix)
	{
		printf("\nFailed to allocate !");
		return NULL;
	}
	// Step 1: Create a prefix product array
	suffix[n - 1] = arr[n - 1];  // First element is the same as the first element of arr
	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] * arr[i];
	}

	return suffix;
}

void main()
{

	size_t x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Example

	size_t s = sizeof(x)/sizeof(size_t);

	size_t y[s];

	printf("\nArray: ");
	print(x, s);

	size_t *pr, *sf;

	pr = prefixArray(x, s );

	// print(pr, s);
	sf = suffixArray(x, s );
	// print(sf, s);
	
	// Step 3: Fill the result array by combining prefix and suffix products
       for (size_t i = 0; i < s; i++) {
        if (i == 0) {
            y[i] = sf[i + 1];  // No prefix for the first element
        } else if (i == s - 1) {
            y[i] = pr[i - 1];  // No suffix for the last element
        } else {
            y[i] = pr[i - 1] * sf[i + 1];
        }
       }
       printf("\nResulting array: ");
       print(y,s);

	free(pr);
	free(sf);



}
