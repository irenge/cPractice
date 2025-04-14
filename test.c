#include<stdio.h>
int main()
{
	for (int j = 10; j <20; j++) {
		printf("\n%d...==>",j);
		for ( int i = 0 ; i < 12; i++) {
			printf(" %d .. ", i);

			if ( i == 2) {
				printf("***c..j=2..***");
				continue;
			}
		//	if (i == 9) {
		//		printf("***break***");
		//		break;
		//	}
		//printf(" %d .. ", i);
	}
	}
	return 0;
}

