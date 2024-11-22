#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	int value;
	double lines;
	double words;
	double chars;
        value = scanf("%lf",&lines);
	if(value==0){
		fprintf(stderr, "Bad Value\n");
		return EXIT_FAILURE;
	}
	//printf("lines %lf",lines);//DEBUGGING
        value=scanf("%lf",&words);
	if(value==0){
                fprintf(stderr, "Bad Value\n");
                return EXIT_FAILURE;
        }
        //printf("\nwords %lf",words);
        value=scanf("%lf",&chars);
	if(value==0){
                fprintf(stderr, "Bad Value\n");
                return EXIT_FAILURE;
        }
	//printf("\nchars %lf",chars);
        double average=(chars-lines)/lines;
	printf("average %0.1f", average);
	printf("\n");
	return EXIT_SUCCESS;
}

