#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){                                                                                     
    if (argc == 1) {
        printf("Try using --help for more info\n");
    } 
    else if(argc==2){   
        if (strcmp(argv[1], "-1") == 0){
            printf("What command lists all the items in the current directory the user is in on bash?\n");
        }                
        else if (strcmp(argv[1], "-2") == 0){
            printf("What was the name of the first program we made in C?\n");
        }
        else if (strcmp(argv[1], "-3") == 0){
            printf("What command in git creates a snapshot of projects staged changes?\n");
        }
        else if (strcmp(argv[1], "--help") == 0){
            printf("-1:Question 1\n-2:Question 2\n-3:Question 3\n--help:gives all commands\n-(Any number from 1-3) (Your Answer): Your answer to the specific question\n"); 
        }
        else{
            return EXIT_FAILURE;
            printf("Try using --help for more info\n");
        }
    }

    else if(argc==3){
        if (strcmp(argv[1], "-1") == 0){
            if(strcmp(argv[2], "ls") == 0){
                printf("Correct, the answer was ls\n");
            }
            else{
                printf("Incorrect, the answer was ls, good try\n");
            }
        }
        else if (strcmp(argv[1], "-2") == 0){
            if(strcmp(argv[2], "hello.c") == 0){
                printf("Correct, the answer was hello.c\n");
            }
            else{
                printf("Incorrect, the answer was hello.c, good try\n");
            }
        }
        else if (strcmp(argv[1],"-3")==0){
            if(strcmp(argv[2], "commit") == 0){
                printf("Correct, the answer was commit\n");
            }
            else{
                printf("Incorrect, the answer was commit, good try\n");
            }
        }
    }
    else{
        return EXIT_FAILURE;
        printf("Try using --help for more info");
    }
    return EXIT_SUCCESS;
}
