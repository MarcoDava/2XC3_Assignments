#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
        bool pass=true;
	bool pass2=false;
        int a,b,c;
        int aLeast,bLeast,cLeast;
        while (pass){
		printf("Enter a date (mm/dd/yyyy): ");
                scanf("%d /%d /%d", &a, &b, &c);
		switch(a){
			case 1:
				if(b!=31){
					printf("Date is not valid\n");
				}
				else{
					pass2=true;
				}
			case 2:
                                if(b!=28){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
				}
			 case 3:
                                if(b!=31){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 4:
                                if(b!=30){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 5:
                                if(b!=31){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 6:
                                if(b!=30){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 7:
                                if(b!=31){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 8:
                                if(b!=31){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 9:
                                if(b!=30){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 10:
                                if(b!=31){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 11:
                                if(b!=30){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
			 case 12:
                                if(b!=31){
                                        printf("Date is not valid\n");
                                }
                                else{
                                        pass2=true;
                                }
		
		}

		if(a==0&&b==0&&c==0){
                        	
			if(aLeast==0&&bLeast==0&&cLeast){
				printf("No dates were entered\n");
				pass=false;
			}
			else{
				printf("%s %d, %d, %d\n","The earliest valid date is ",aLeast,bLeast,cLeast);
                        	pass=false;
			}
                }
                if((c<cLeast||c==cLeast&&a<aLeast||c==cLeast&&a==aLeast&&b<bLeast)&&pass2){
                        cLeast=c;
                        bLeast=b;
                        aLeast=a;
			pass2=false;
                }
        }
}
