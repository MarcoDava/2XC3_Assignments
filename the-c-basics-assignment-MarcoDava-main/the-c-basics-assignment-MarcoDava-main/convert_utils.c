/*
	This is the seccond .c file that provides all the necessary methods to convert.c file. This is to ensure there 
	is a modular structure.



Marco Dava, Mcmaster, 2024
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "convert_utils.h"

#define min 2//defines constants
#define max 36
void usage_output(){
	fprintf(stderr,"Usage: convert [-b BASE] [-r START FINISH]\n       1 < BASE < 37\n       START and FINISH are long integers\n");
}//this is used for error messages.
void help_output(int *help_mode){//passes int help mode for convert.c
	*help_mode=1;
	printf("%s","\nPROGRAM DESCRIPTION:\n\nThis program converts decimal numbers to a base representation of it\n\nOPTIONAL FLAGS:\n\n-b [base]: Sets the base to a number between and including 2 to 36\n-r [START] [END]: Turns range mode on and outputs a list of numbers from the START to the END\n--help: Outputs description of program and provides all the possible flags\nIf the range isnt set, it will allow you to input as many numbers as you like until the end of file.\nNo string values are accepted\n\n");
}
int parse_input(int argc, char *argv[], int *base, long *start, long *finish, int *range_mode,int *help_mode){
	for(int i=1;i<argc;i++){
		if(strcmp(argv[i],"--help")==0){
			help_output(help_mode);//passes help_mode through so that in convert.c, it knows to return either 0 or 1 depending on whether it is an error or not. help will return stout so it will return 0
			return -1;//this returns -1 so that the program does not continue. this does not mean --help flag is an error. 
		}
		if(strcmp(argv[i],"-b")==0){//this compares the first argument and checks if it is -b, if it is, it will return 0 and continue
		
			if(++i>=argc){//the reason why it is ++i instead of i++ is so that it iterates first before comparing. this checks if there is an argument after -b which is why it is checking if i is greater than argc
				usage_output();//if there is no argument after -b, it will output an error message
				return -1;
			}
			*base=atoi(argv[i]);//converts string into int and then sets base variable
			
			if(*base<min || *base>max){//uses contants to check if the base is within the min and max
				usage_output();
				return -1;
			}
		}
		else if(strcmp(argv[i],"-r")==0){
			if(i+2>=argc){//will check if there are arguments past -r, if not, error message
				usage_output();
				return -1;
			}//it needs to check for 2 because we need the max and min
			i++;
			*start = atol(argv[i++]);
                	*finish = atol(argv[i]);
			*range_mode=1;//because -r flag was called, it will now use range_mode in convert.c
		}
		else{
			usage_output();
			return -1;
		}
	}
	return 0;
}

void convert_base(long num,int base){//takes in a num to get the base representation
	if(num<0){
		printf("-");//if there is a negative number, this will print out - and get the base representation as if it was postive
		num=-num;//converts from negative to positive to prevent errors
	}
	int digit=num%base;//gets the remainder, which is necessary to convert to the right representation
 	if(num>=base){//uses recursion to print out the values in the correct order
                convert_base(num/base,base);//returns until num is less than base
        }
	if(digit>=10){//if the number is greater than 10, it needs to be turned into its letter counterpart
		printf("%c",(digit-10)+'A');
	}//returns the correct ascii value
	else{
		printf("%c",'0'+digit);//returns right digit
	}
}





