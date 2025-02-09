#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include "calc.h"
#include "stack.h"


#define IS_DIGIT(ch) ((ch) >= '1' && (ch) <= '9')

void process_token(char ch){
    if(illegal_entry(ch)){
        printf("Invalid entry! Please enter two numbers and an operation");
        return;
    }

    if(IS_DIGIT(ch)){
        push(ch);
        return;
    }
    switch(tolower(ch)){
        case '+':
           add();
            break;
        case '-':
        subtract();
            break;
        case '*': case 'x':
        multiply();
            break;
        case '/':
        divide();
            break;
        default:
            printf("Please enter a valid number or operation");
            break;
    }
}

bool illegal_entry(char ch){
  return true;
}

void add(){}
void subtract(){}
void multiply(){}
void divide(){}