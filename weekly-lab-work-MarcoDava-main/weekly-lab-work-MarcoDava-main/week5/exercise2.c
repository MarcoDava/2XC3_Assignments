#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	bool pass=true;
	int a,b,c;
	int aLeast,bLeast,cLeast;
	printf("%s","Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &a, &b, &c);
	aLeast=a;
	bLeast=b;
	cLeast=c;
	while (pass){
		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d /%d /%d", &a, &b, &c);
		if(a==0&&b==0&&c==0){
			printf("%s %d, %d, %d","The earliest valid date is ",aLeast,bLeast,cLeast);
			pass=false;
		}
		if(c<cLeast||c==cLeast&&a<aLeast||c==cLeast&&a==aLeast&&b<bLeast){
			cLeast=c;
			bLeast=b;
			aLeast=a;
		}
	}
}
