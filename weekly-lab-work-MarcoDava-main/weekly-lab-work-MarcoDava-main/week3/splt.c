#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char words[1001];
    while (true)
    {
        int result = scanf("%s", words);
        if (result == 0)
        {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }
        if (result == EOF){
            break;
	}
        printf("%s\n", words);
    }
    return EXIT_SUCCESS;
}  
