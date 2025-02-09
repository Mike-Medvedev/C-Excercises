#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int top = 0;

int stack[MAX_SIZE];

void push(int operand){
    if(is_full()){
        printf("Error Stack overflow");
        exit(1);
    }
    stack[top++] = operand;
}
int pop(void){
    if(is_empty()){
        printf("Error Stack underflow");
        exit(1);
    }

    return stack[--top];
}
bool is_full(void){
    return top == MAX_SIZE;
}
bool is_empty(void){
    return top == 0;
}
void clear_stack(void){
    top = 0;
}
int peek(void){
    if(is_empty()){
        printf("Stack is empty");
        return -1;
    }
    return stack[top];
}
