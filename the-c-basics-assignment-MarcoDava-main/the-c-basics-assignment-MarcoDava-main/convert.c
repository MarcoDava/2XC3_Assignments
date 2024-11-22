/*Programmer: Marco Dava
 *Program Description:
 *This program takes converts a decimal number to a specified base or will convert a list of numbers to a certain base
 *The program will accept two types of arguments
 *-b [base #] : This will set the base of the conversion
 *-r [START] [END] : This will convert a list of numbers from the start to the end to the specified base
 *there is also a --help function that outputs what the program does
 *if -r is not used, the user can convert multiple numbers into the specified base until the user gives an unwanted-
 *input or it is the end of file(ctrl-d) 
 *Marco Dava, McMaster, 2024
*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "convert_utils.h"//this inclusion allows this file to access the functions from convert_utils.c

int main(int argc,char *argv[]){//argc provides the amount of arguments said after ./convert is called and argv provides the content of the actual arguments said
	int base=16;//defaults the base as 16 if no base was declared in the arguments
	long start=0;
	long finish=0;
	int range_mode=0;
	int help_mode=0;
	if(parse_input(argc, argv, &base, &start, &finish,&range_mode,&help_mode)==-1){
		if(help_mode){// help_mode is to differentiate when user asked for --help flag and when its an error. both error and --help use the -1 exit because 0 is reserved for when user wants to use the program
			return 0;
		}
		else{
			return 1;
		}
	}//calls parse_input
	//parse input takes in all the values through pointers and ensures all the arguments that are inputted are valid
	//if the input is not valid, the method will return 1 and program will end 
	if(range_mode)//if user used the -r flag and provided a start and end, it will go into this if statement
	{
		for(long i=start;i<=finish;i++){//will iterate through every number from the start to the end
			convert_base(i,base);//gives numbers through i into the function convert_base
			//it will return all the correct base representations of the number
			printf("\n");
		}
	}
	else{
		long num;//this variable will be used to take in user input
		while(scanf("%ld",&num)==1){//if what was detected was an integer type, it will return 1, otherwise it will cause an error as shown in the if statement below
			convert_base(num,base);
			printf("\n");
		}
		if(!feof(stdin)){//!feof means if eof was not encountered, the user has inputted a non integer input.
			fprintf(stderr,"Error: Non-long-int token encountered.\n");
			return 1;
		}
	}
	return 0;	
}
