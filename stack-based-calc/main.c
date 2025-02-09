#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "calc.h"
#include "stack.h"

char ch;


/**
 * Calculator based on reversed polish notation stack implementation
 * 
 * (3 + 4) x (5 + 6) becomes 3 4 + 5 6 + *
 * 
 * 
 */
int main(void) {
    printf("\nWelcome to the Calculator! \n\nPlease enter a number followed by an operation "
           "or press q to exit! Press c to clear!\n");

    char input[20];

    while (scanf("%s", input) == 1) { 
        if (input[0] == 'q') break; 

        if(input[0] == 'c') {
            printf("Clearing calculator...");
            clear_stack();
            continue;
        }

        if (isdigit(input[0])) {
            push(atoi(input)); 
        } else { 
            process_token(input[0]);
        }
    }

}
