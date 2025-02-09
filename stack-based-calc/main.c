#include <stdio.h>
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
int main(){
   printf("\r\nWelcome to The Ultimate Calculator! \n \nPlease enter a number followed by an operation "
    "and press q to exit!\n");

   while((ch = getchar()) != 'q'){
    if(ch == '\n') continue;
    process_token(ch);
   }

}
