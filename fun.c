#include<stdio.h>
int main()
{
	int i, j, prime;
       printf("The prime number between 5 and 50 are:");

	for( i=5; i<=50; i++ ) {
		prime = 1;
		 for( j=2; j<i; j++ ) {
			 if( i % j == 0 ) {
				 prime = 0:
		break;
	}
    }
		 if ( prime && ((i* 5) % 2 == 0)) {
			 printf("%d",i);
		 }
	}

	return 0;
}
