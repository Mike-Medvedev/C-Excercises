#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "calc.h"
#include "stack.h"

int operator_count = 0;
int operand_count = 0;

void process_token(char ch){
    if(!legal_entry(ch)){
        printf("Invalid entry! Please enter two numbers and an operation\n");
        exit(1);
        return;
    }

    if(isdigit(ch)){
        push(ch - '0');
        return;
    }
    perform_operation(tolower(ch));
}

bool legal_entry(char ch){
  return true;
}
void perform_operation(char op) {
    int operand_2 = pop();
    int operand_1 = pop();
    int result;

    switch (op) {
        case '+': result = operand_1 + operand_2; break;
        case '-': result = operand_1 - operand_2; break;
        case '*': case 'x': result = operand_1 * operand_2; break;
        case '/': 
            if (operand_2 == 0) {
                printf("Error: Division by zero\n");
                exit(1);
            }
            result = operand_1 / operand_2;
            break;
        default:
            printf("Error: Invalid operation\n");
            exit(1);
    }
    printf("Result: %d\n", result);
    push(result);
}
