#include <stdio.h>
#include <stdlib.h>



int digits(long n, int* max, int* min){
	int digits=0;
	int sum=0;
	*max=*min=sum=n%10;
	n=n/10;
	while(n>0){
		int digit=n%10;
		if (digit> *max){
			*max=digit;
		}else if (digit<*min){
			*min=digit;
		}
		n=n/10;
		sum+=digit;
	}
	return sum;
}
