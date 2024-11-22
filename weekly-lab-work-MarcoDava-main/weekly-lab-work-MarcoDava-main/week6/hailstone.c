#include <stdio.h>

int hailstone(long a){
	printf("%d ",a);
	if (a==1){
		return 0;
	}
	if (a%2==0){
		a=a/2;
	}
	else{
		a=3*a+1;
	}
	return hailstone(a);
}
int main(){
	long n;
	scanf("%d",&n);
	hailstone(n);
}
