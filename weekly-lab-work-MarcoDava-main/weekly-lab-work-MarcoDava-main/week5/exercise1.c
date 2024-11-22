#include <stdio.h>
#include <stdlib.h>

int main() {
    int days, start_day;
    printf("How many days this month? ");
    scanf("%d", &days);


    printf("What’s the starting day (1=Monday, 7=Sunday)? ");
    scanf("%d", &start_day);

    printf("M  T  W  T  F  S  S\n");

 
    for (int i = 1; i < start_day; i++) {
        printf("   ");
    }

    
    for (int day = 1; day <= days; day++) {
        printf("%2d ", day); 

        if ((day + start_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

  
    printf("\n");

    return 0;
}
