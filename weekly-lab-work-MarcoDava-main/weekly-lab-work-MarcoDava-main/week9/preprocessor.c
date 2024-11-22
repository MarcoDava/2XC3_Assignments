
/* Some examples of preprocessor directives. To see the preprocessor output:
 *
 *    gcc -E preprocessor.c >p2.c
 *
 * Examine the file p2.c and look for content pasted in from headers, content
 * changed due to macros, and comments removed.
 *
 * Sam Scott, McMaster University, 2024.
 */
#include <stdio.h>
#include "preprocessor.h"

#define DEBUG 0      // change to 1 to see debugging output

#define HST 13       // Harmonized Sales Tax

#define BEGIN {      // alternate syntax
#define END   }

#define WITH_HST(amount) ((amount) + (amount) * HST / 100) // adds HST

/* Note the alternate syntax with the BEGIN and END macros */
void main()
BEGIN
    float subtotal, total;

    subtotal = get_bill();

    total = WITH_HST(subtotal);

    printf("The HST is currently %d%%. With tax, your bill comes to $%.2f.\n", HST, total);
END 

/* Reads a bill amount from stdin. Contains debugging output */
float get_bill() {
    #if DEBUG
        printf("Entering get_bill\n");
    #endif
    float amount;
    printf("What's the bill? ");
    scanf("%f", &amount);
    #if DEBUG
        printf("Exiting get_bill: %f\n", amount);
    #endif
    return amount;
}

