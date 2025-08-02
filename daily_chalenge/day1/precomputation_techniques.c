#include <stdio.h>
#include <stdlib.h>

// This function prints the array
void print(int arr[], int N)
{
    for (int i = 0; i < N; i++) {
       printf("%d ", arr[i] );
    }
}

// This function calculates the PrefixSum
// of the array
void PrefixSum(int ARR[], int N)
{

    // PRE[] array stores the result
    int PRE[N];
    for (int i = 0; i < N; i++) {

        // At index 0, no previous values
        // are present
        if (i == 0)
            PRE[i] = ARR[i];
        else
            PRE[i] = PRE[i - 1]  ARR[i];
    }
    printf("Prefix Product: ");
    print(PRE, N);
}

char *prefixArray(const int *arr, size_t srcSize, size_t *sl)
{
  char *prefix = malloc(s);
  if (!prefix)
  {
	  printf("\nFailed to allocate !");
	  return ;
  } 
    *sl = srcSize;
    
// Step 1: Create a prefix product array
    //int prefix[n];
    prefix[0] = arr[0];  // First element is the same as the first element of arr
    
    for (int i = 1; i < (*sl); i++) {
        prefix[i] = prefix[i - 1] * arr[i];
    }
  return prefix;
}
// This function finds the Suffix
// sum of the array
void SuffixSum(int ARR[], int N)
{

    // This array stores the result
    int SUF[N];
    for (int i = N - 1; i >= 0; i--) {

        // At index N-1, there is no suffix
        // value available
        if (i == N - 1)
            SUF[i] = ARR[i];
        else
            SUF[i] = SUF[i + 1] + ARR[i];
    }
    cout << "Suffix Sum: ";
    print(SUF, N);
}

void main()
{





}
