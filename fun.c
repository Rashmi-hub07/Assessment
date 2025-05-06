#include<stdio.h>
int main()
{
	int i, j, prime;
	
	for(i=5;i<=50;i++){
	 prime=1;

	for(j=2;j<=i;j++){
	  if(i%j==0){
         
		  prime=0;

	 break;
	}
      }
	if(prime){
		printf("%d".i);
	}
      }
	printf("\n");
	return 0;

}
